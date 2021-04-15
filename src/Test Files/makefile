CXX = g++

HEADER := ../Header\ Files/math_lib.h
SRC := ../Source\ Files/math_lib.cpp
INC := -I../Header\ Files


all: math_test clean

math_test: math_tests.o math_lib.o
	$(CXX) math_tests.o math_lib.o -o $@

math_tests.o: math_tests.cpp $(HEADER)
	$(CXX) $(INC) math_tests.cpp -c

math_lib.o: $(SRC) $(HEADER)
	$(CXX) $(INC) $(SRC) -c

clean:
	rm -f math_lib.o math_tests.o


