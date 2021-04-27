/**
 * @file profiling_src.cpp
 *
 * @brief Computation of standard deviation.
 * The standard deviation si calculated to uncover redundancies in code and to
 * make the code more effective
 * @author Juraj Mariani (xmaria03)
 * Team: QWERTZ
 */


//#define __DEBUG__

#ifndef __DEBUG__
	#define LOG(s) ;
	#define ERR(s) ;
#else
	#define LOG(s) fprintf(stderr,"%s %s: %s\n",__DATE__,__TIME__,s);
	#define ERR(s) fprintf(stderr,"%s %s: %s, TERMINATING\n",__DATE__,__TIME__,s);
#endif

#include <iostream>
#include <vector>
#include "math_lib.h"

#define NUMBER_LIMIT 1000

using namespace std;

long double sum( std::vector<double> *values )
{
	
	long double out = 0;
	
	std::vector<double>::iterator i = values->begin();

	LOG("\tIn 'sum()' function, Iterating ...");
	while (i < values->end())
	{
		out = add( out, *i );
		i++;
	}

	LOG("\tIn 'sum()' function, Result Calculated, returning to 'main'");

	return out;
}



long double squared_sum( std::vector<double>* values, long double* sum_out )
{

	long double out = 0;
	std::vector<double>::iterator i = values->begin();

	LOG("\tIn 'squared_sum()' function, Iterating ...");

	while (i < values->end())
	{
		out = add( out, power( *i, 2));

		i++;
	}

	LOG("\tIn 'squared_sum()' function, Result Calculated, returning to 'main'");

	return out;
}



std::vector<double> load_seq()
{

	LOG("\tEntered function 'load_seq()'");
	LOG("\tInitialising input variable 'input_stream'");
	std::vector<double> input_stream;
	std::vector<double>::iterator idx = input_stream.begin();

	double loadee = 0;
	int scanf_result = 0;
	unsigned int index = 0;

	while (index < NUMBER_LIMIT)
	{
		LOG("\t\tScanning from STDIN");
		scanf_result = scanf("%lf",&loadee);
		if ( scanf_result == EOF )
		{
			LOG("\t\tScanned 'EOF', ending scan");
			break;
		}
		index++;
		idx = input_stream.insert(idx,loadee);
		//std::cout << *(idx) << " inp[" << index-1 << "]\n";
		LOG("\t\tValue successfully added");
	}

	LOG("\tDone, Returning to 'main'");
	return input_stream;

}



int main()
{

	// Zmenit z *double na vector<double>
	LOG("START OF THE PROFILING");
	LOG("------------------------------------------");
	LOG("Entering function 'load_seq()'");
	std::vector<double> input = load_seq();
	LOG("Loading sequence DONE");
	LOG("Calculating...");

	LOG("Calculating SUM");
	long double basic_sum = sum(&input);
	basic_sum = mul( div( 1.0f, input.size() ), basic_sum );
	//std::cout << basic_sum << "aaaa sum\n";
	LOG("SUM DONE");

	LOG("Calculating Squared SUM");
	long double sqrd_sum = squared_sum(&input, &basic_sum);
	sqrd_sum = sub ( sqrd_sum, mul( input.size(), power( basic_sum, 2 ) ) );
	LOG("SQUARED SUM DONE");

	LOG("SQRT...");
	long double s = nqrt( mul( div( 1.0f, sub( input.size(), 1 ) ) , sqrd_sum ) , 2 );
	LOG("PROFILING DONE!");

	LOG("Printing Output");
	printf("%Lf\n",s);
	LOG("End Of Code");
	return 0;

}
