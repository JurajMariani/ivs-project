//
//
//
//
//
//
//

/**/
//#pragma once

#ifndef __HFUNC_H__
#define __HFUNC_H__

//#include "math_lib.h"
#include <string>
#include <iostream>
#include <vector>
#include <regex>
#include <list>
#include "math_lib.h"
using namespace std;


class Higher_Func
{

public:

struct element
{
    //is operation, 1y 0n
    bool operation;
    //importance in string of operations
    int power;
    //given
    string str;
};

    string solve (string input);

protected:

    double ans;

    //Operand Checks
    bool IsNumber(string gElement);

    bool IsOperand(string gElement);

    double GetNumber(string number);

    vector<string> SplitString(string wString);

    int CheckValidity(vector<string> elements); 

    int AssignImportance(string input);

    list<Higher_Func::element> CreateOperationList(vector<string> elements);

    double DoOperation(string operation,double operandA, double operandB); 

    string MainIterationCycle(list<element> listOfElements);
    /*
    string Dot(string *input);
    string ReDot(string *input);
    */
};

#endif

/*EndComment*/
