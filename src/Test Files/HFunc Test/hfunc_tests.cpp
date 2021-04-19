#include <stdexcept>
#include <iostream>
#include "hfunc_lib.h"
#include <string>
using namespace std;


int owall_failed_test = 0;

void hfunc_test()
{
	Higher_Func func;
	int failed_test = 0;
	int test_numb = 0;
	string test_string;
	string expect_output;
	string real_output;
	cout << "HFUNC TEST START\n";

	test_numb++;
	test_string = "2 + 2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2.5 + -5";
	expect_output = "-2.5";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2000000000 + 18";
	expect_output = "2000000018";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2 - 2";
	expect_output = "0";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "ans - 2";
	expect_output = "-2";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "10000.99987 - 1";
	expect_output = "9999.99987";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "2 - -2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2 * 2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2 * -2";
	expect_output = "-4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "ans + 82";
	expect_output = "78";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "2 * 0";
	expect_output = "0";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "8 / 2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "0 / 2";
	expect_output = "0";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2.5 / 5";
	expect_output = "0.5";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "-5 / 0.1";
	expect_output = "-50";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "2 * 2 / 4 + 5 - 2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "2.85 - 0.85 * 55 / 11 + 0.1";
	expect_output = "-1.3";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "-5555 * 22 / 100 - 55.832 + 1543 / 2";
	expect_output = "-506.432";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "log 10";
	expect_output = "1";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "-1 * log 100 + 2 log 8";
	expect_output = "1";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}	

	test_numb++;
	test_string = "2 √  100";
	expect_output = "10";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "3 √ 64 - 28 * -2";
	expect_output = "60";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "2 ^ 2";
	expect_output = "4";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "16 ^ 6";
	expect_output = "16777216";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	//Toto ma fungovat?
	//Lebo Juro to aktivne blokuje
	test_numb++;
	test_string = "2 ^ -3";
	expect_output = "0.125";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "5 !";
	expect_output = "120";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	//changes
	test_numb++;
	test_string = "4 ! * 10 / 24 + 12 ^ 2 * 82";
	expect_output = "11818";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "12 ! - 555 * 20.5 + 2 √ 10000000000 / 100";
	expect_output = "478991222.5"; //toto je dost random cize not sure fnuk
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	//toto zaokruhluje tebe
	test_numb++;
	test_string = "852 * 5517 ^ 2 / 2 √ 1000000 ";
	expect_output = "25932570.23";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	//changes
	test_numb++;
	test_string = "-12 + 54 - 20 * 44 / 25 + log 10 - log 1 + 5 ! - 22 ^ 2 * 4 √ 16";
	expect_output = "-840.2";
	real_output = func.solve(test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	//changes
	test_numb++;
	test_string = "ans * -2 / 10 - 0.24 + ans ^ 2 ";//ako robi -2 ^ 2 - 2 ^ 2 ci to da -4 alebo aj zatvorky ...???
	expect_output = "706103.84";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	test_numb++;
	test_string = "pi";
	expect_output = "3.1415926535897932";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}
	
	test_numb++;
	test_string = "e";
	expect_output = "2.7182818284590452";
	real_output = func.solve (test_string);
	if (real_output != expect_output) 
		{
			failed_test++;
			cout <<	test_numb << " input: " << test_string << " output: " << real_output << " exp_output: " << expect_output << endl; 
		}

	
	if (failed_test > 0)
		owall_failed_test++;
	cout << "HFUNC TEST END\n";

	cout << "------------------------------------\n";



	if (owall_failed_test > 0)
		std::cout << "RESULT:\t" << owall_failed_test << " tests failed.\n";
	else
		std::cout << "ALL TESTS WERE SekssESSFUL, YAY!\n";

}


int main()
{
	//Higher_Func::
	hfunc_test();

	return 0;

}
