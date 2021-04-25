/**
 * @file math_lib.h
 *
 * @brief Basic math functions and constant declaration
 * @author Juraj Mariani (xmaria03)
 * Team: QWERTZ
 */

#ifndef __MATH_LIB_H__
#define __MATH_LIB_H__

#define EPS 1e-16
#define PI 3.14159265358979323846264338327950
#define E 2.71828182845904523536028747135266


/**
 * Addition function
 *
 * @param x 1st addend
 * @param y 2nd addend
 * @return Returns the sum of values x and y
 */
double add (double x, double y);


/**
 * Subtraction function
 *
 * @param x Base value
 * @param y Subtracted value
 * @return Returns the difference in value between x and y
 */
double sub (double x, double y);


/**
 * Multiplication function
 *
 * @param x Base value
 * @param y Multiplicator
 * @return Returns x multiplied by y
 */
double mul (double x, double y);


/**
 * Division function
 *
 * @param x Dividee
 * @param y Divider
 * @return Returns dividee divided by divider -> x/y
 */
double div (double x, double y);


/**
 * Factorial function
 *
 * @param x The entry value
 * @return Returns the factorial of x -> x!
 */
double fact (double x);


/**
 * Power function
 *
 * @param x The base value
 * @param n The power x will be raised to
 * @return Returns x to the n-th power
 */
double power (double x, double n);


/**
 * N-th root function
 *
 * @param x The base value
 * @param n The power of the root
 * @return Returns the n-th root of x
 */
double nqrt (double x, double n);


/**
 * Logarithm function part 1
 * @brief Is executed by 'log()' function if base is greater than 1
 *
 * @param base Base of the logarithm
 * @param x Logarithmized value
 * @return Returns the base-based logarithm of x -> log [base] (x)
 */
double log_gt_one (double base, double x);


/**
 * Logarithm function part 2
 * @brief Is executed by 'log()' function if base is lesser than 1 or is equal to constant e
 *
 * @param x Logarithmized value
 * @return Returns the natural logarithm of x -> ln [e] (x)
 */
double ln (double x);


/**
 * Logarithm function part 3
 * @brief Depending on the input, executes the 'ln()' function or 'log_gt_one()' function
 *
 * @param base Base ot the logarithm
 * @param x Logarithmized value
 * @return Returns the base-based logarithm of x -> log [base] (x)
 */
double log (double base, double x);


/**
 * Absolute value function
 *
 * @param x | x |
 * @return Returns the absolute value of x
 */
double abs_v (long double x);


#endif

/*** END OF FILE math_lib.h ***/
