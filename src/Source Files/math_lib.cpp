//
//
//
//
//
//
//
//
//
//

/**/

#include <iostream>
#include "math_lib.h"

double add (double x, double y)
{

	return (x+y);

}

double sub (double x, double y)
{

	return (x-y);

}

double mul (double x, double y)
{

	return (x*y);

}

double div (double x, double y)
{

	if (( y >= 0 - EPS ) && ( y <= 0 + EPS ))
		throw std::runtime_error("Division by zero");

	return (x/y);

}

double fact (double x)
{
	if ((x > (int)x + EPS) || (x < (int)x - EPS))
		throw std::runtime_error("Factorial can only be done form an integer");

	double out = 1.0;
	for (int i = (int)x ; i > 0 ; i--)
	{
	
		out *= i;
	
	}

	return out;

}

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

double nqrt (double x, double n)
{
	
	if (( (long)n <= 0 ) || ((n > (long)n + EPS) || (n < (long)n - EPS) ))
		throw std::runtime_error("The power of the root has to be a positive integer");
	if ( ( x < 0.0 ) || ( x + EPS < 0.0 ) )
		throw std::runtime_error("The value has to be greater than or equal to zero");

	long double x_prev = rand() % 10;

	double diff = INT8_MAX;
	long double x_i = x;

	while ( diff > EPS )
	{
	
		x_i = ( ( ((long)n - 1.0) * x_prev ) + ( x / power(x_prev, (long)n-1) ) ) / n ;
		diff = abs(x_i - x_prev);
		x_prev = x_i;
	
	}

	return ( x_i );

}

double log_gt_one (double x)
{

	unsigned short dec = 0;
	long long n;
	long double out = 0.0;

	while ( dec < 16 )
	{
		n = 0;
		while( ! ( ( power(BASE,n) <= x ) && ( power(BASE,n+1) > x ) ) )
			n += 1;

		x = x / power( BASE, n );
		x = power( x, (long long)power(BASE, n) );
		out = out + ((double)n * power(BASE,(long long)dec));
		dec += 1;
	}

	return ( out );
}

double log_lt_one(double x)
{

	long double diff = 1;
	unsigned short k = 1;
	long double out = 0.0;
	long double out_prev = 0.0;

	while( diff > EPS )
	{

		out_prev = out;
		out = out + (( power(-1,k+1) / k ) * power(x - 1, k));
		k += 1;
		diff = abs( out - out_prev );

	}

	out = out / ln10;

	return ( out );
	
}

double log (double x)
{

	if ( x + EPS <= 0 )
		throw std::runtime_error("The logarithmised value has to be a positive non-zero value");

	if ( x > 1 + EPS )
		return ( log_gt_one( x ) );
	if (( x >= 1 - EPS ) && ( x <= 1 + EPS ))
		return ( 0.0 );
	if ( x < 1 - EPS )
		return ( log_lt_one( x ) );
}

double abs (long double x)
{

	if ( x < 0 )
		return ( x * (-1) );
	return ( x );

}