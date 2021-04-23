CXX = g++

HEADER := ../../Header\ Files/hfunc_lib.h
MATH_HEADER := ../../Header\ Files/math_lib.h
SRC := ../../Source\ Files/hFunc.cpp
MATH_SRC := ../../Source\ Files/math_lib.cpp
INC := -I../../Header\ Files


all: hfunc_test

hfunc_test: hfunc_tests.o hFunc.o math_lib.o
	$(CXX) hfunc_tests.o hFunc.o math_lib.o -o $@

hfunc_tests.o: hfunc_tests.cpp $(HEADER)
	$(CXX) $(INC) hfunc_tests.cpp -c

hFunc.o: $(SRC) $(HEADER) $(MATH_HEADER)
	$(CXX) $(INC) $(SRC) -c

math_lib.o: $(MATH_SRC) $(MATH_HEADER)
	$(CXX) $(INC) $(MATH_SRC) -c

clean:
	rm -f hFunc.o hfunc_tests.o math_lib.o


