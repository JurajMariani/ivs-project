/**
 * @file math_lib.cpp
 *
 * @brief Implementation of math functions from 'math_lib.h'
 * @author Juraj Mariani (xmaria03)
 * Team: QWERTZ
 */

#include <iostream>
#include "../Header Files/math_lib.h"


/**
 * Addition function
 *
 * @param x 1st addend
 * @param y 2nd addend
 * @return Returns the sum of values x and y
 */
double add (double x, double y)
{

	return (x+y);

}


/**
 * Addition function
 *
 * @param x 1st addend
 * @param y 2nd addend
 * @return Returns the sum of values x and y
 */
double sub (double x, double y)
{

	return (x-y);

}


/**
 * Multiplication function
 *
 * @param x Base value
 * @param y Multiplicator
 * @return Returns x multiplied by y
 */
double mul (double x, double y)
{

	return (x*y);

}


/**
 * Division function
 *
 * @param x Dividee
 * @param y Divider
 * @return Returns dividee divided by divider -> x/y
 */
double div (double x, double y)
{

	if (( y >= 0 - EPS ) && ( y <= 0 + EPS ))
		throw std::runtime_error("Division by zero");

	return (x/y);

}


/**
 * Factorial function
 *
 * @param x The entry value
 * @return Returns the factorial of x -> x!
 */
double fact (double x)
{
	if ((x > (int)x + EPS) || (x < (int)x - EPS))
		throw std::runtime_error("Factorial can only be done from a positive integer");

	if (0 > (int)x)
		throw std::runtime_error("Factorial can only be done from a positive number");

	double out = 1.0;
	for (int i = (int)x ; i > 0 ; i--)
	{
	
		out *= i;
	
	}

	return out;

}


/**
 * Power function
 *
 * @param x The base value
 * @param n The power x will be raised to
 * @return Returns x to the n-th power
 */
double power(double x, double n)
{

	if ((n > (long long)n + EPS) || (n < (long long)n - EPS))
                throw std::runtime_error("Power: X can only be raised to the power of a positive integer or zero");

	if (n < 0 )
		throw std::runtime_error("The exponent can only be a positive integer");

	double out = 1.0;
	long long new_n = (long long)n;

	if (( x >= 1 - EPS ) && ( x <= 1 + EPS ))
		return 1.0;

	for ( int i = 0 ; i < new_n ; i++)
	{
		
		out = out * x;

	}

	return ( out );

}


/**
 * N-th root function
 *
 * @param x The base value
 * @param n The power of the root
 * @return Returns the n-th root of x
 */
double nqrt (double x, double n)
{
	
	if (( (long)n <= 0 ) || ((n > (long)n + EPS) || (n < (long)n - EPS) ))
		throw std::runtime_error("The power of the root has to be a positive integer");
	if ( ( x < 0.0 ) || ( x + EPS < 0.0 ) )
		throw std::runtime_error("The value has to be greater than or equal to zero");

	long double x_prev = rand() % 10;

	double diff = INT8_MAX;
	double diff_prev = 0;
	long double x_i = x;

	while (( diff > EPS ) && ( abs_v(diff - diff_prev) > 0 + EPS ))
	{
	
		x_i = ( ( ((long)n - 1.0) * x_prev ) + ( x / power(x_prev, (long)n-1) ) ) / n ;
		diff_prev = diff;
		diff = abs_v(x_i - x_prev);
		x_prev = x_i;
	
	}

	return ( x_i );

}


/**
 * Square root function
 * @brief Sqrt function desperately needed by the Logarithm function.
 *
 * @param val The base value
 * @return The square root of val
 */
long double sqrt_x (long double val)
{
	long double out = val;
	long double y = 1;
	while ( out - y > 0.0000001 )
	{
		out = ( out + y ) / 2;
		y = val / out;
	}
	return out;
}


/**
 * Logarithm function
 * @brief Is executed by 'log()' function if base is greater than 1
 *
 * @param x Logarithmized value
 * @return Returns the 10-based logarithm of x -> log [10] (x)
 */
double log_ten (double x)
{

	long double out = x;

	for (int i = 0 ; i < 13 ; i++)
	{
		out = sqrt_x(out);
	}
	out = out -1;
	out = out * 3558;

	return ( out );

}


/**
 * Logarithm function executer
 * @brief Executes the logarithm function over the value and base
 *
 * @param base Base ot the logarithm
 * @param x Logarithmized value
 * @return Returns the base-based logarithm of x -> log [base] (x)
 */
double log (double base, double x)
{

	if (( x + EPS < 1 ) || ( base + EPS <= 0))
		throw std::runtime_error("The logarithmised value or the base has to be a positive value greater or equal to one");

	if ( x > 1 + EPS )
		return ( log_ten(x) / log_ten(base) );
	return ( 0.00 );
}


/**
 * Absolute value function
 *
 * @param x | x |
 * @return Returns the absolute value of x
 */
double abs_v (long double x)
{

	if ( x < 0 )
		return ( x * (-1) );
	return ( x );

}

/*** END OF CODE math_lib.cpp ***/
