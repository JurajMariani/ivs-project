#include<stdexcept>
#include<iostream>
//#include"math_lib.cpp"

//

//

//

//DAVAJU SA 1.5 ALEBO 1,5???


void Add_test()
{
	//integer
	int expected_result = 9;
	int a = 3;
	int b = 6;
	int irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 0;
	b = 0;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 5;
	a = 10;
	b = -5;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -7;
	a = -4;
	b = -3;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//float
	float expected_result = 5;
	float a = 2.5;
	float b = 2.5;
	float irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 4.3;
	b = -4.3;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 10.7554;
	a = 7.2554;
	b = 3.5;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;
	
	expected_result = -0.8;
	a = -0.5;
	b = -0.3;
	irl_result = add(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'add( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

}
void Sub_test()
{
	//int
	int expected_result = 6;
	int a = 9;
	int b = 3;
	int irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 5;
	b = 5;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 0;
	b = 0;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 3;
	a = -9;
	b = 12;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -6;
	a = 9;
	b = -15;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;
	
	//float
	float expected_result = 5;
	float a = 7.5;
	float b = 2.5;
	float irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 8.32;
	a = 10;
	b = 1.68;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -9.1;
	a = 1.8;
	b = -7.3;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -33.3;
	a = -11.1;
	b = -22.2;
	irl_result = sub(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'sub( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;
}
void Mul_test()
{
	//integer
	int expected_result = 18;
	int a = 3;
	int b = 6;
	int irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 3;
	b = 0;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -10;
	a = -5;
	b = 2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 10;
	a = -5;
	b = -2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 11;
	a = 1;
	b = 11;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//float
	float expected_result = 12.4;
	float a = 6.2;
	float b = 2;
	float irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 3.333;
	a = 3.333;
	b = 1;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -11;
	a = -5.5;
	b = 2;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 39.3;
	a = -3;
	b = -13.1;
	irl_result = mul(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'mul( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

}
void Div_test()
{
	//int
	int expected_result = 5;
	int a = 10;
	int b = 2;
	int irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0;
	a = 0;
	b = 2;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -5;
	a = -10;
	b = 2;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 2;
	a = -4;
	b = -2;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 10;
	a = 10;
	b = 1;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;


	a = 10;
	b = 0;
	double irl_result;
	try
	{
	double irl_result = div(a, b);
	}
	catch (runtime_error& e);
	{
		err_flag = true;
	}
	if (err_flag != true)
		std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | DIVIDED BY ZERO " << std::end1;
		
		//float
	float expected_result = 2.75;
	float a = 27.5;
	float b = 10;
	float irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 17.8;
	a = 44.5;
	b = 2.5;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -3.5;
	a = -8.4;
	b = 2.4;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 10/3;
	a = 10;
	b = 3;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -5/3;
	a = 5;
	b = -3;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 5;
	a = -5.5;
	b = -1.1;
	irl_result = div(a, b);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'div( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;
}
void Fact_test()
{
	//int
	int expected_result = 120;
	int a = 5;
	int irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 1;
	a = 1;
	irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 1;
	a = 0;
	irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	double expected_result = 2,6525285981219105863630848e+32;
	a = 30;
	double irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result =-2;
	a = -2;
	irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//float 
	float expected_result = 2.25;
	float a = 1.5;
	float irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 2.25;
	a = -1.5;
	irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 0.25;
	a = 0.5;
	irl_result = fact(a);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'fact( " << a << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

}
 void Power_test()
{
	//int
	int expected_result = 25;
	int x = 5;
	int n = 2;
	int irl_result = fact(x,n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 4096;
	x = 8;
	n = 4;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -8;
	x =-2;
	n = 3;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -1;
	x = -1;
	n = 1;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//float
	float expected_result = 2.25;
	float x = 1.5;
	float n = 2;
	float irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 244.140625;
	x = 2.5;
	n = 6;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	double expected_result = 9.313225746e+20;
	x = 5;
	n = 30;
	double irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = -421.875;
	x = -7.5;
	n = 3;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'power( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

}
void Nqrt_test()
{
	//int
	int expected_result = 5;
	int x = 25;
	int n = 2;
	int irl_result = nqrt(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'nqrt( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	expected_result = 2;
	x = 8;
	n = 3;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'nqrt( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	int expected_result = 0;
	int x = 0;
	int n = 3;
	irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'nqrt( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//float
	float expected_result = 2.3;
	float x = 3;
	float n = 12.167;
	float irl_result = fact(x, n);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'nqrt( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;
	
	//error ked deli x je menej nez nula
	int x = -2;
	int n = 2;
	try
	{
		double irl_result = nqrt(x, n);
	}
	catch (runtime_error& e);
	{
		err_flag = true;
	}
	if (err_flag != true)
		std::cout << "ERROR: (function 'nqrt( " << x << ", " << n << ")') | x < 0 " << std::end1;
}
void Log_test()
{
	//int
	int expected_result = 2;
	int x = 100;
	int irl_result = log(x);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'log( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	int expected_result = 1;
	int x = 10;
	int irl_result = log(x);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'log( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	int expected_result = 0;
	int x = 1;
	int irl_result = log(x);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'log( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	double expected_result = 15;
	double x = 1e+15;
	double irl_result = log(x);
	if (expected_result != irl_result) std::cout << "ERROR: (function 'nqrt( " << a << ", " << b << ")') | EXPECTED OUTPUT = " << res << " | ACTUAL RESULT = " << act_res << std::endl;

	//error ked x je mensie alebo rovne 0
	int x = -2;
	try
	{
		double irl_result = log(x);
	}
	catch (runtime_error& e);
	{
		err_flag = true;
	}
	if (err_flag != true)
		std::cout << "ERROR: (function 'log( " << x << ")') | x <= 0 " << std::end1;
}
int main()
{
	Add_test();
	Sub_test();
	Mul_test();
	Div_test();
	Fact_test();
	Power_test();
	Nqrt_test();
	Log_test();

	return 0;
}