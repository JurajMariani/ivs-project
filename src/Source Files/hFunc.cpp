//
//
//
//
//
//
//

/**/
#include "hfunc_lib.h"

#include <string>
#include <iostream>
#include <vector>
#include <regex>

using namespace std;

//Input string, output the list of elements divided by spaces
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
bool Higher_Func::IsNumber(string gElement){
    regex number ("-?(pi)|(e)|(ans)|-?([0-9]+(\\.[0-9]+)?)");
    return regex_match(gElement,number);
}

//Checks if string is a number
bool Higher_Func::IsOperand(string gElement){
    regex sign ("(\\+)|(\\-)|(\\*)|(\\/)|(\\^)|(√)|(log)|(!)");
    return regex_match(gElement,sign);
}

//input string, return ans value if ans, or pi or e, converts string to double if not
double Higher_Func::GetNumber(string number){
    if (number.compare("ans")==0)
    {
        return ans;
    }else
    if(number.compare("pi")==0){
        return pi;
    }else
    if(number.compare("e")==0){
        return e;
    }
    else{
        return stod(number);
    }
}

//inputs operation and returns its importance in equation
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
double Higher_Func::DoOperation(string operation,double operandA, double operandB){
    double result=0.0;
    //cout<<"gothere"<<endl;
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
string FormatString(string input){
    regex dot (".");
    int tearC = 0;
    for (int i = (input.size()-1);i>=0;i--){
        if(input.at(i)=='.'){
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
                    i_operand->str=to_string(DoOperation(operation,operandA,operandB));
                    //cout<<operation<<" results in "<<i_operand->str<<endl;
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
            return to_string(pi);
        }
        if(i_operand->str.compare("e")==0){
            return to_string(e);
        }
        return FormatString(i_operand->str);
    }
    else
        return "multiple things remain";
}

string Higher_Func::solve (string input){
    vector<string> arrayOfElements = SplitString(input);
    //TODO max size
    //if (arrayOfElements.size()>maxSize){Error}
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

    return result;
}

/*EndComment*/