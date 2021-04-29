/**
 * @file math_tests.cpp
 * @brief Tests for the math library 'math_lib.h'
 *
 * @author Lukas Macejka (xmacej03)
 * Team: QWERTZ
 */


#include <stdexcept>
#include <iostream>
#include "math_lib.h"


unsigned short count_overall = 0;


/**
 * Add_test Function
 * @brief Tests for the 'add()' function
 * Collection of various tests for said function from math library
 */
void add_test()
{
	unsigned short count = 0;
	std::cout << "ADD TEST START\n";
	//integer
	double expected_result = 9;
	double a = 3;
	double b = 6;
	double irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 0;
	b = 0;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 5;
	a = 10;
	b = -5;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -7;
	a = -4;
	b = -3;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//float
	expected_result = 5;
	a = 2.5;
	b = 2.5;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 4.3;
	b = -4.3;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 10.7554;
	a = 7.2554;
	b = 3.5;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}
	
	expected_result = -0.8;
	a = -0.5;
	b = -0.3;
	irl_result = add(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";

	std::cout << "ADD TEST COMPLETE\n";
	count_overall += count;

}


/**
 * Sub_test Function
 * @brief Tests for the 'sub()' function
 * Collection of various tests for said function from math library
 */
void sub_test()
{
	unsigned short count = 0;
	std::cout << "SUB TEST START\n";
	//int
	double expected_result = 6;
	double a = 9;
	double b = 3;
	double irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 5;
	b = 5;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 0;
	b = 0;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 3;
	a = 9;
	b = 12;
	irl_result = sub(b, a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -6;
	a = 9;
	b = 15;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}
	
	//float
	expected_result = 5;
	a = 7.5;
	b = 2.5;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 8.32;
	a = 10;
	b = 1.68;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -9.1;
	a = 1.8;
	b = -7.3;
	irl_result = sub(b, a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -33.3;
	a = -11.1;
	b = 22.2;
	irl_result = sub(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	if (count == 0)
		std::cout << "\tALL TESTS SUCCESSFUL\n";

	std::cout << "SUB TEST COMPLETE\n";
	count_overall += count;
}


/**
 * Mul_test Function
 * @brief Tests for the 'mul()' function
 * Collection of various tests for said function from math library
 */
void mul_test()
{
	unsigned short count = 0;

	std::cout << "MUL TEST START\n";
	//integer
	double expected_result = 18;
	double a = 3;
	double b = 6;
	double irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 3;
	b = 0;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -10;
	a = -5;
	b = 2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 10;
	a = -5;
	b = -2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 11;
	a = 1;
	b = 11;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//float
	expected_result = 12.4;
	a = 6.2;
	b = 2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 3.333;
	a = 3.333;
	b = 1;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -11;
	a = -5.5;
	b = 2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 39.3;
	a = -3;
	b = -13.1;
	irl_result = mul(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";

	std::cout << "MUL TEST COMPLETE\n";
	count_overall += count;

}


/**
 * Div_test Function
 * @brief Tests for the 'div()' function
 * Collection of various tests for said function from math library
 */
void div_test()
{
	
	unsigned short count = 0;
	std::cout << "DIV TEST START\n";
	//int
	double expected_result = 5;
	double a = 10;
	double b = 2;
	double irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	a = 0;
	b = 2;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -5;
	a = -10;
	b = 2;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 2;
	a = -4;
	b = -2;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 10;
	a = 10;
	b = 1;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}


	a = 10;
	b = 0;
	irl_result;
	bool err_flag = false;
	try
	{
		irl_result = div(a, b);
	}
	catch (std::runtime_error&)
	{
		err_flag = true;
	}
	if (err_flag != true)
		{std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | DIVIDED BY ZERO " << std::endl; count++;}
		
		//float
	expected_result = 2.75;
	a = 27.5;
	b = 10;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 17.8;
	a = 44.5;
	b = 2.5;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -3.5;
	a = -8.4;
	b = 2.4;
	irl_result = div(a, b);
	if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = (double)10/(double)3;
	a = 10;
	b = 3;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = (double)-5/(double)3;
	a = 5;
	b = -3;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 5;
	a = -5.5;
	b = -1.1;
	irl_result = div(a, b);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";
	
	std::cout << "DIV TEST COMPLETE\n";
	count_overall += count;
}


/**
 * Fact_test Function
 * @brief Tests for the 'fact()' function
 * Collection of various tests for said function from math library
 */
void fact_test()
{
	unsigned short count = 0;
	std::cout << "FACTORIAL TEST START\n";
	//int
	double expected_result = 120;
	double a = 5;
	double irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 1;
	a = 1;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 2;
	a = 2;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 2.6525285981219105863630848e+32;
	a = 30;
	irl_result = fact(a);
	if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 479001600;
	a = 12;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//float 
	expected_result = 24;
	a = 4;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 1;
	a = 0;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 720;
	a = 6;
	irl_result = fact(a);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	a = -2.5;
        bool err_flag = false;
        try
        {
                irl_result = fact(a);
        }
        catch (std::runtime_error&)
        {
                err_flag = true;
        }
        if (!err_flag)
                {std::cout << "\tERROR: (function 'fact( " << a << ")') | a is a noninteger value" << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";



	std::cout << "FACTORIAL TEST COMPLETE\n";
	count_overall += count;

}


/**
 * Power_test Function
 * @brief Tests for the 'power()' function
 * Collection of various tests for said function from math library
 */
 void power_test()
{
	unsigned short count = 0;
	std::cout << "EXPONENTIAL TEST START\n";
	//int
	double expected_result = 25;
	double x = 5;
	double n = 2;
	double irl_result = power(x,n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 4096;
	x = 8;
	n = 4;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -8;
	x =-2;
	n = 3;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -1;
	x = -1;
	n = 1;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//float
	expected_result = 2.25;
	x = 1.5;
	n = 2;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 244.140625;
	x = 2.5;
	n = 6;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 9.313225746e+20;
	x = 5;
	n = 30;
	irl_result = power(x, n);
	if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = -421.875;
	x = -7.5;
	n = 3;
	irl_result = power(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}
	
	x = 15.5;
        n = 0.4;
        bool err_flag = false;
        try
        {
                irl_result = power(x, n);
        }
        catch (std::runtime_error&)
        {
                err_flag = true;
        }
        if (!err_flag)
                {std::cout << "\tERROR: (function 'power( " << x << ", " << n << ")') | n is a noninteger value" << std::endl; count++;}
	
	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";

	std::cout << "EXPONENTIAL TEST COMPLETE\n";
	count_overall += count;

}


/**
 * N-th Root test Function
 * @brief Tests for the 'nqrt()' function
 * Collection of various tests for said function from math library
 */
void nqrt_test()
{
	unsigned short count = 0;
	std::cout << "NQRT TEST START\n";
	//int
	double expected_result = 5;
	double x = 25;
	double n = 2;
	double irl_result = nqrt(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 2;
	x = 8;
	n = 3;
	irl_result = nqrt(x, n);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	x = 0;
	n = 3;
	irl_result = nqrt(x, n);
	if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//float
	expected_result = 2.3;
	x = 12.167;
	n = 3;
	irl_result = nqrt(x, n);
	if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}
	
	//error ked deli x je menej nez nula
	x = -2;
	n = 2;
	bool err_flag = false;
	try
	{
		irl_result = nqrt(x, n);
	}
	catch (std::runtime_error&)
	{
		err_flag = true;
	}
	if (!err_flag)
		{std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | x < 0 " << std::endl; count++;}

	x = -2;
        n = 0.5;
        err_flag = false;
        try
        {
                irl_result = nqrt(x, n);
        }
        catch (std::runtime_error&)
        {
                err_flag = true;
        }
        if (!err_flag)
                {std::cout << "\tERROR: (function 'nqrt( " << x << ", " << n << ")') | n is a noninteger value" << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";
	
	std::cout << "NQRT TESTS COMPLETE\n";
	count_overall += count;

}


/**
 * Log_test Function
 * @brief Tests for the 'log()' function
 * Collection of various tests for said function from math library
 */
void log_test()
{
	unsigned short count = 0;
	std::cout << "LOG TEST START\n";
	//int
	double expected_result = 1;
	double x = 10;
	double irl_result = log(10,x);

	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'log( " << x << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 0;
	x = 1;
	irl_result = log(10,x);
	if (expected_result != irl_result) {std::cout << "\tERROR: (function 'log( " << x << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	expected_result = 2;
        x = 25;
        irl_result = log(5,x);
        if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'log(" << x << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	std::cout << "zaklad e: " << E << std::endl;

	expected_result = 2.1972245773362193827904904738450;
        x = 9;
        irl_result = log( E , x );
        if ((expected_result < irl_result - EPS) && (expected_result > irl_result + EPS)) {std::cout << "\tERROR: (function 'log(" << x << ")') | EXPECTED OUTPUT = " << expected_result << " | ACTUAL RESULT = " << irl_result << std::endl; count++;}

	//error ked x je mensie alebo rovne 0
	x = -2;
	bool err_flag = false;
	try
	{
		double irl_result = log(10,x);
	}
	catch (std::runtime_error&)
	{
		err_flag = true;
	}
	if (err_flag != true)
		{std::cout << "\tERROR: (function 'log( " << x << ")') | x <= 0 " << std::endl; count++;}

	if ( count == 0 )
		std::cout << "\tALL TESTS SUCCESSFUL\n";

	std::cout << "LOG TEST COMPLETE\n";

	count_overall += count;
}


/**
 * Main Function
 * @brief Test suite for math library
 * Executes test collections for each function from math library
 */
int main()
{

	std::cout << "TEST SUITE\nRUNNING TESTS:\n\n";
	
	add_test();
	
	std::cout << "------------------------------------\n";
	
	sub_test();
	
	std::cout << "------------------------------------\n";
	
	mul_test();
	
	std::cout << "------------------------------------\n";
	
	div_test();
	
	std::cout << "------------------------------------\n";
	
	fact_test();
	
	std::cout << "------------------------------------\n";
	
	power_test();
	
	std::cout << "------------------------------------\n";
	
	nqrt_test();
	
	std::cout << "------------------------------------\n";
	
	log_test();
	
	std::cout << "------------------------------------\n";
	std::cout << "====================================\n";
	
	std::cout << "TESTS DONE\n\n\n";

	if (count_overall > 0)
		std::cout << "RESULT:\t" << count_overall << " tests failed.\n";
	else
		std::cout << "ALL TESTS WERE SUCCESSFUL, YAY!\n";

	return 0;
}
