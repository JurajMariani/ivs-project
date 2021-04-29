/**
 * @file hfunc_lib.h
 * @brief Declaration of 'higher functions' over a 'Higher_Function' class
 *
 * @author Tomas Lukac (xlukac16)
 * Team: QWERTZ
 */


#include "../Header Files/hfunc_lib.h"

#include <string>
#include <iostream>
#include <vector>
#include <regex>
#include <clocale>

using namespace std;

/*
string Higher_Func::ReDot(string input){
    for(int i = 0;i<input.size();i++){
        if(input.at(i)=='.')
            input[i]=',';
    }
    return input;
}

string Higher_Func::Dot(string input){
    for(int i = 0;i<input.size();i++){
        if(input.at(i)==',')
            input[i]='.';
    }
    return input;
}
*/

//Input string, output the list of elements divided by spaces

/**
 * Split string Function
 * @brief Function takes the string and divides it by space character, saves to vector
 *
 * @param wString String that gets divided
 * @return The divided string in vector
 */
vector<string> Higher_Func::SplitString(string wString){
    vector<string> saveTo;
    string element = "";
    bool inString = false;
    for (auto x : wString )
    {
        if ((x == ' ') && (inString==true))
        {
            saveTo.insert(saveTo.end(),element);
            element = "";
            inString=false;
        }else
            if (x != ' ' ) {
                inString=true;
                element = element + x;
            }
    }
    if(element!="")
        saveTo.insert(saveTo.end(),element);
    return saveTo;
}

//Checks if string is a number

/**
 * Is Number Function
 * @brief Checks if the parameter is a number
 *
 * @param gElement The string that is tested for integers
 * @return (true) - Number, (false) - Not a Number
 */
bool Higher_Func::IsNumber(string gElement){
    regex number ("-?(pi)|(e)|(ans)|-?([0-9]+(\\.[0-9]+)?)");
    return regex_match(gElement,number);
}

//Checks if string is a number

/**
 * Is Operand Function
 * @brief Checks whether parameter is any one of known operands
 *
 * @param gElement The string tested for operand
 * @return (true) - Operand, (false) - Not an Operand
 */
bool Higher_Func::IsOperand(string gElement){
    regex sign ("(\\+)|(\\-)|(\\*)|(\\/)|(\\^)|(√)|(log)|(!)");
    return regex_match(gElement,sign);
}

//input string, return ans value if ans, or pi or e, converts string to double if not

/**
 * Get Number Function
 * @brief takes the parameter string and converts it into a number
 * If the string is 'ans', 'pi', or 'e', it ts substituted with the value
 *
 * @param number String containing the number
 * @return The 'number' string as a double value
 */
double Higher_Func::GetNumber(string number){
    if (number.compare("ans")==0)
    {
        return ans;
    }else
    if(number.compare("pi")==0){
        return PI;
    }else
    if(number.compare("e")==0){
        return E;
    }
    else{
        std::setlocale(LC_NUMERIC,"C");
        return stod(number);
    }
}

//inputs operation and returns its importance in equation

/**
 * Assign Importance Function
 * @brief Assigns importance of functions
 * The importance determines the order of execution, the greater the number, the sooner is the operation going to be executed
 *
 * @param input String containing the operation
 * @return The importance value assigned - 3 = MAX, 2 = MED, 1 = LOW
 */
int Higher_Func::AssignImportance(string input){
    if(input.compare("log")==0 || input.compare("√")==0||input.compare("!")==0||input.compare("^")==0){
        return 3;
    }
    else
    if(input.compare("*")==0 || input.compare("/")==0){
        return 2;
    }
    else{
        return 1;
    }
}

//Checks if all parameters are valid

/**
 * Check Validity Function
 * @brief checks whether vector contains valid elements
 * Valid elements are operations and numbers
 *
 * @param elements Vector of string values containing elements
 * @return (-1) - ALL OK, (integer <0,size>) - Problem with element[return]
 */
int Higher_Func::CheckValidity(vector<string> elements){
    for (int i = 0;i<elements.size();i++){
        if (IsNumber(elements[i])){
            continue;
        }
        if (IsOperand(elements[i])){
            continue;
        }
        return i;
    }
    return -1;
}


/**
 * Create Operation List Function
 * @brief Function creates a linked-list from vector elements
 * The order of operations is constructed with the assigned importance in mind, the MAX importance execute first, LOW importance executes last
 * @see AssignImportance()
 *
 * @param elements Vector of operations and numbers
 * @return Constructed Linked-list of execution order elements
 */
list<Higher_Func::element> Higher_Func::CreateOperationList(vector<string> elements){
    list<element> retList;
    for (int i = 0; i<elements.size();i++){
        element addition;
        if(IsNumber(elements[i])){
            addition = {false,0,elements[i]};
        }else{
            int addVal = AssignImportance(elements[i]);
            addition = {true,addVal,elements[i]};
        }
        retList.insert(retList.end(),addition);
    }
    return retList;
}

//Recognizes and performs single operation,returns result

/**
 * Do Operation Function
 * @brief Function executes one operation from linked list over two operands
 * 
 * @param operation String name/sign of the executing operation
 * @param operandA 1st operand, number
 * @param operandB 2nd operand, number value
 *
 * @return The result of the operation, double value
 */
double Higher_Func::DoOperation(string operation,double operandA, double operandB){
    double result=0.0;
    //cout<<operation<<" "<<operandA<<" "<<operandB<<endl;
    try{
    if (operation.compare("+")==0)
        result= add(operandA,operandB);
    if(operation.compare("-")==0)
        result= sub(operandA,operandB);
    if(operation.compare("*")==0)
        result= mul(operandA,operandB);
    if (operation.compare("/")==0)
        result= div(operandA,operandB);
    if (operation.compare("^")==0)
        result= power(operandA,operandB);
    if (operation.compare("√")==0)
        result= nqrt(operandB,operandA);
    if (operation.compare("log")==0)
        result= log(operandA,operandB);
    if (operation.compare("!")==0)
        result= fact(operandA);
    }
    catch(runtime_error& error){
        throw runtime_error(error.what());
    }
    return result;
}

//Does the format thingy

/**
 * Format String Function
 * @brief Function thet gets rid of redundant symbols
 * This function is used mainly to format string that is printed in the calculator, all math functions return double, so 2+2 = 4.00000. This function strips the unnecessary zeroes
 *
 * @param input The soon-to-be formatted string
 * @return The formatted input string
 */
string FormatString(string input){
    int tearC = 0;
    for (int i = (input.size()-1);i>=0;i--){
        if(input.at(i)=='.' || input.at(i)==','){
            tearC++;
            break;
        }
        if(input.at(i)!='0'){
            break;
        }
        tearC++;
    }
    input.resize(input.size()-tearC);
    return input;
}

//Here is where magic happens...want some magic :P
//ok
//here it is
//EXPLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOSION
/*
$@@@@@@gggggg|||||||||TMM&&$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@
l$$$$$$$$$$$$$$$@@@@@ggg|||||||TM&&$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
l$$$$$$$$$$$$$$$$$@@$@@$$$$@@@@@@gg|||||TM&&$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
ll$$$@$$$$$$$$@$$$@@$@@$$@$$$$$$@@$$$@@@@ggg||||TM&&$$$$$$$$$$$$$$$$$$$$$$$$$$$$
|l$$$$@$$$$$@@@@@$@@$$@@@@@$@@$@@@@@@$@@@$@@$@@@@@@gg||||TM&&$$$$$$$$$$$$$$$$$$$
lll$$$@@$$@@@@@@@@@@$$@@@@@@@@@$@@@@@@@@@@$@@@$$@@$$@@@@@@@ggg|||||1M&&$$$$$$$$$
lll$@@@$@@@$$$$$$$$$$$$$$$$$$$|j$$$@@@@@@@$$@@$$@$@@$@@@@$@@@$$@@@@@@gg|||||||T*
 $ll@@$$$$$$$$$$$$$$$$$$$$$$$Fl|$$$$$$$$$$$$@M|$$@$@@@@$$@@@@$@@@@@@@$$@@@@@@@@@
 lll$$$$$$$$$$$$$$$$$$$$$$@@@g,|l$$$$$$$$$$$$Fl&$$$@$@@@@@@$@@$@@@@@@@@@$@@@$@$$
  $ll$$$$$$$$$$$$$$$$$$$T@$$$|"|T$$$$$$$$$$$$W|T"$$$l1$$$@@$@@$@@@@@@@@@@@@@@@@$
  |ll$$$$$$$$$$$$$@$$$$|&$$$L   'l$$$$$$$$$$$$|  '$$Wl|$$$$$$@@@@@@@@@@@@@$@@@$$
  |lll$$$$$$$$$$$$@$$$|T $$$|     "$$$$$$$$$$$F   `$@ ll1$$$|$$$$$@@@@@@@@$@@@@@
 ,+*$l&$$$$$$$$$$$$$$|L  ]$@       ]$$$$$1$$$$@|,, |$ggl|l$$|l1$$$$$$$$@@@@$@@@@
'   lll$$$$$$$$$$$$$ML   |$F|    ,  |"***|1$$$$ -,@@@MMMNB@@g l|$$$$$$$$$$$@@@@@
  | |$lj$$$$$$$$$$$F`||;g@@@@@gg; -          '-|j@M|$ggg ""T%@@ll$$$$$$$$$$$$$$@
    |lll$$$$$$$$$$L| g@@@MT||||%B@               "  )&$$$    @"||$$$$$$$$$$$$$$$
     |$ll$$$$$$$$$|g@@$|  5&*$$@ "                ]@F  |$F  T   |$$$$$$$$$$$$@$@
      lll$$$$$$$$$L'%@   y@L  *$@                |j$@-||$      |j$$$$$$$$$$$$@$$
     |,$W&@$$$$$$$@||"   $@g, l*$                  1&&&W` |    |]$$@$$$$$$$$$@$@
|  +*- |ll$$$$$$$$$L  |   %$$g$WL|        s         |+|. |     |$$@$$$$$$$$$$$$$
Wa'|   |lll$$$$$$$$@|   |, '""||||+|||   |lL|    |||'||| ||||||j$@@$$$$$$$$$@@$$
$+     ||ll$$$$$$$$$g|||||`|+` |'||                 ||       |j$FM$$$$$$$$$$$@$$
$@||   ||lll$$$$$$$$$g|'||'    | |       ;gggggggg;L|   ||   ;&'$|@$$$$$$$$@$@$$
$$F|   |||$l$&&$$$$$$$@gg |  |||   |,|g@@$$@@$@$$$@@+|      /'|j@@@$$$$$$$@@@@@$
|$$+||,w+"|- |||*&$$$@@$$$&g|      |$$$$@M$$$$$$$$$$L      '||;@@@$$$$$$$$@@@@@$
|$@@$$$|||        "i|]@$$$$$g|     |$@$$$$$$$$$$$$$$        |g@@@@$$$$$$$@@$@@@@
1$$$$$$w|  ,l$L     |L$@@@$$$&|     *$$$$$$$$$$$$&$$|     ,g@@@@$$$$$$$$@@@@@@@$
$$$$$$$$gi$M$ll$&rL|j|$$@@$&$$&     |"$$||||||||||$L|  ||$@@@$$@@$$$$@@$@@@@@@@@
$@$$$$N$$$@@@"""'T"x$|$$@@@$@$$@,|  ||'5|||||||||&"|||l@@@@$$$$@$$@$$@@@@@@@@@@@
$$$$$$$$$$$$$g|     j&]$$@@@@$$$@|MwL,   "ll!l'` ||y@$l@@$$$$$$$@$@$$$$$@@@@@@@@
$$$$$$$$$$$$$$L  | |j@@@$$$@@@$$$@ll||TMWgL,,,|,g$||l|@@$$$$@$$$@@$$$$$$$$l$$$$$
$$$$$$$$$$$$$@g"''||']$@@@@$@@@@$$@g|llllll|||||ll|@@$@$$$$$$$$$@$$@@@g$$$$$$$$$
$$$$$$$$$$$$$$$F     |$@@$$$@$$@@$&$@@@g||lllll||@@$@@$$$$$$$$$$@$@@@$$$@@@@$$$$
$$$@$$$$$$$$$$$@| ||,j$$@@$$$$@$$@$$$@@@@@@@@@@@$$$$@$$$$$$$$$$$@$$@$$$$$$$$$$$@
$$$$$$$$$$$$@@@@"|"` |]$@@@@$$$$$$$@@|%$@@@@@@@$$$@$@$@$$$$$$$$$$$&$$$$$$$$$$$$$
$$$$$@$$$$$$$$$$@|    |$$@@@@$$$$$$$@lll||%$MMM$T|l$$@@$$$$$$$@$$$||$$$$$$$$$$$$
...v mojej hlave to vypadalo lepsie...
*/

/**
 * Main Iteration Cycle Function
 * @brief Function that cycles through the linked-list and executes operations
 * The functions also redirects and handles possible exceptions from math library 'math_lib.h' and itself
 *
 * @param listOfElements Linked-list containing the ordered operations and operands
 * @return The overall formatted result
 */
string Higher_Func::MainIterationCycle(list<element> listOfElements){
    list<element>::iterator i_operation = listOfElements.begin();
    list<element>::iterator i_operand = listOfElements.begin();
    double operandA;
    double operandB;
    string operation;
    for (int power = 3; power > 0; power-=1){
        for (i_operation = listOfElements.begin(); i_operation != listOfElements.end();i_operation++){
            if(i_operation->power==power){
                //Pomocny Vypis
                //cout<<"operation "<<i_operation->str<<endl;
                /*
                list<element>::iterator it = listOfElements.begin();
                for(int i = 0; i < listOfElements.size();i++){
                    cout<<"Element "<<i<<" "<<it->str<<" power "<<it->power<<endl;
                    advance(it,1);
                } 
                */          
                operation = i_operation->str;
                bool errFlag=1;
                bool makeFlag=0;
                if(operation.compare("!")==0){
                    if(i_operation==listOfElements.begin()){
                        errFlag=0;
                    }else{
                        i_operand=i_operation;
                        i_operand--;
                        if(IsOperand(i_operand->str)){
                            errFlag=0;
                        }
                    }
                    if(errFlag==0){
                        throw runtime_error("operation " + i_operation->str + " has an invalid operands");
                    }
                    operandA=GetNumber(i_operand->str);
                    try{
                        i_operand->str=to_string(DoOperation(operation,operandA,0.0));
                    }
                    catch (runtime_error& error){
                        throw runtime_error(error.what());
                    }
                    i_operation=listOfElements.erase(i_operation);
                    i_operation=i_operand;
                    continue;
                }else
                if (i_operation==listOfElements.begin()){
                    errFlag=0;
                }else{
                    i_operand=prev(i_operation);
                    if(IsOperand(i_operand->str)){
                        errFlag=0;
                    }
                }
                if(errFlag==0){
                    if(i_operation->str.compare("log")==0){
                        operandA=10.0;
                        makeFlag=1;
                    }else
                    if (i_operation->str.compare("√")==0){
                        operandA=2.0;
                        makeFlag=1;
                    }else
                        throw runtime_error("operation " + i_operation->str + " has an invalid operands");
                }else{
                    operandA=GetNumber(i_operand->str);
                }
                errFlag=1;
                if(i_operation==listOfElements.end()){
                    errFlag=0;
                }else{
                    i_operand=i_operation;
                    i_operand++;
                    if(IsOperand(i_operand->str)){
                        errFlag=0;
                    }
                }
                if(errFlag==0)
                    throw runtime_error("operation " + i_operation->str + " has an invalid operand");
                operandB=GetNumber(i_operand->str);
                try{
                    //cout<<operandA<<" "<<operation<<" "<<operandB<<endl;
                    i_operand->str=to_string(DoOperation(operation,operandA,operandB));
                    //cout<<operation<<" results in "<<i_operand->str<<endl;
                    //cout<<"begf"<<i_operand->str<<endl;
                    //cout<<"af"<<DoOperation(operation,operandA,0.0)<<endl;
                }
                catch (runtime_error& error){
                    throw runtime_error(error.what());
                }
                i_operand++;
                if(makeFlag==0){
                    i_operation=prev(i_operation);
                    i_operation=listOfElements.erase(i_operation);
                }
                i_operation=listOfElements.erase(i_operation);
            }
        }
    }
    //pomocny vypis
    /*
    list<element>::iterator it = listOfElements.begin();
    for(int i = 0; i < listOfElements.size();i++){
        cout<<"Element "<<i<<" "<<it->str<<" power "<<it->power<<endl;
        advance(it,1);
    }
    */
    
    if(listOfElements.size()==1){
        i_operand=listOfElements.begin();
        ans=GetNumber(i_operand->str);
        if(i_operand->str.compare("pi")==0){
            return to_string(PI);
        }
        if(i_operand->str.compare("e")==0){
            return to_string(E);
        }
        return FormatString(i_operand->str);
    }
    else
        return "multiple things remain";
}


/**
 * Solve Function
 * @brief Executes functions from splitting the string to getting the final result
 *
 * @param input The input string from the calculator 'screen'
 * @return The overall result that gets printed onto the calculator 'screen'
 */
string Higher_Func::solve (string input){
    //input=ReDot(input);
    vector<string> arrayOfElements = SplitString(input);
    int flag = CheckValidity(arrayOfElements);
    if (flag != -1 ){
        return "Invalid input: " + arrayOfElements[flag];
    }
    list<element> workList = CreateOperationList(arrayOfElements);
    string result;
    try{
        result=MainIterationCycle(workList);
    }
    catch (runtime_error& error){
        result =  error.what();
    }
    //result=Dot(result);
    return result;
}

/*** END OF FILE hFunc.cpp*/
