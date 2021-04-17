CXX = g++

HEADER := ../../Header\ Files/hfunc_lib.h
SRC := ../../Source\ Files/hFunc.cpp
INC := -I../../Header\ Files
MATH_SRC := ../../Source\ Files/math_lib.cpp


all: hfunc_test clean

hfunc_test: hfunc_tests.o hFunc.o math_lib.o
	$(CXX) hfunc_tests.o hFunc.o -o $@

hfunc_tests.o: hfunc_tests.cpp $(HEADER)
	$(CXX) $(INC) hfunc_tests.cpp -c

hFunc.o: $(SRC) $(HEADER)
	$(CXX) $(INC) $(SRC) -c

math_lib.o: $(MATH_SRC) $(HEADER)
	$(CXX) $(INC) $(MATH_SRC) -c

clean:
	rm -f hFunc.o hfunc_tests.o math_lib.o


