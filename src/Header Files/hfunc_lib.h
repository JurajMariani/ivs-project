/**
 * @file hfunc_lib.h
 * @brief Declaration of 'higher functions' over a 'Higher_Function' class
 *
 * @author Tomas Lukac (xlukac16)
 * Team: QWERTZ
 */

#ifndef __HFUNC_H__
#define __HFUNC_H__

#include <string>
#include <iostream>
#include <vector>
#include <regex>
#include <list>
#include "math_lib.h"
using namespace std;

/**
 * @class Higher_Func
 * @brief Class of Higher functions
 */
class Higher_Func
{

public:

/**
 * Structure 'element'
 */
struct element
{
    bool operation; /**< if( is_operation ) then operation = True, else operation = False */
    //importance in string of operations
    int power; /**< the importance of an operation in an array of operations */
    //given
    string str; /**< the string containing the entered operations */
}; // Structure 'element'

    string solve (string input); /**< Method 'solve()' executes the operations in input strung */

protected:

    double ans; /**< Last calculator output */

    //Operand Checks
    bool IsNumber(string gElement); /**< Checks whether gElement is a number */

    bool IsOperand(string gElement); /**< Checks whether gElement is an operand */

    double GetNumber(string number); /**< Transforms the 'number' string into a double value */

    vector<string> SplitString(string wString); /**< Splits string into a vector */

    int CheckValidity(vector<string> elements); /**< Checks the validity of operations or numbers within the vector */

    int AssignImportance(string input); /**< Assigns importance to all operations within the vector */

    list<Higher_Func::element> CreateOperationList(vector<string> elements); /**< Creates linked-list of operation execution order */

    double DoOperation(string operation,double operandA, double operandB); /**< Executes operation over given operands */

    string MainIterationCycle(list<element> listOfElements); /**< Cycles through the linked-list and executes operations */
    
    /*
    string Dot(string *input);
    string ReDot(string *input);
    */

}; // class Higher Functions class

#endif

/*** END OF FILE hfunc_lib.f ***/
