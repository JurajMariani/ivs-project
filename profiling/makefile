#/***********************************************************************
# * Team: QWERTZ
# * Author: Juraj Mariani (xmaria03)
# *
# ***********************************************************************



CXX = g++

HEADER := ../src/Header\ Files/math_lib.h
INC := -I../src/Header\ Files/
SOURCE := ../src/Source\ Files/math_lib.cpp
PROFILING := ../src/Source\ Files/profiling_src.cpp



all: build clean


build: math_lib.o profiling_src.o
	$(CXX) math_lib.o profiling_src.o -o stddev

math_lib.o: $(SOURCE) $(HEADER)
	$(CXX) $(INC) $(SOURCE) -c

profiling_src.o: $(PROFILING) $(HEADER)
	$(CXX) $(INC) $(PROFILING) -c


clean:
	rm -f math_lib.o profiling_src.o

ref_output: all
	#Executing reference output, standard deviation counted beforehand to be: 9444.532233
	#Calculated value:
	./stddev < example100vals.txt

give_permit: generate_random.sh
	chmod 777 generate_random.sh
