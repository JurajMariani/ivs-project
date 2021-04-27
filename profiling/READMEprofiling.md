ATTENTION!

1)
The numbers can be fed to the profiling program 'stddev' by a pipe:
	cat example.txt | ./stddev

or directly:
	./stddev < example.txt

2)
If no file is fed into the program, it expects input from STDIN - standard input.

3)
Maximum number of values entered is 1000, if you fed a file with more numbers, the program stops reading after it reaches 1000
-------------------------------------------------------------------------------------------

4)
We have included a random number generation script 'generate_random.sh'
It requires one argument - the number of values it needs to create:
	./generate_random.sh 100	<- is going to generate 100 random values


5)
So you can either pipe the script output to the program:
	./generate_random.sh 100 | ./stddev

or you can go indirectly and save the output of the script to a file ...:
	./generate_random.sh 100 > example.txt

... and then continue as in 1).

** You may need to give generate_random.sh permission to execute. If this is your case type:    **
	make give_permit

6)
If you want to see debug info, uncomment //#define __DEBUG__ -> #define __DEBUG__

7)
To show you how it works, we have prepared an example. You can open the reference input text file 'example100vals.txt'
and see that there are exactly 100 random numbers. If you want you can calculate the standard deviation if you don't
believe. We have calculated ourselves the result using scrips for sums and then the rest using wolframalpha.com
To see the result, type 'make ref_output':
	make ref_output

** Please note that this will not work, if you have deleted or altered the file 'example100vals.txt' **





Guide To Profiling - Juraj Mariani (xmaria03)
