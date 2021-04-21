all: build pack clean test doc profile run

.PHONY: build pack clean test doc run profile


profile:
	#TBA

doc: 
	#TBA

pack:
	#TBA

test:
	$(MAKE) -C ./src/Test\ Files/Math\ Lib\ Test/
	./src/Test\ Files/Math\ Lib\ Test/math_test > res.txt
	rm ./src/Test\ Files/Math\ Lib\ Test/math_test
	rm ./src/Test\ Files/Math\ Lib\ Test/res.txt
	
	$(MAKE) -C ./src/Test\ Files/HFunc\ Test/
	./src/Test\ Files/HFunc\ Test/hfunc_test > res.txt
	rm ./src/Test\ Files/HFunc\ Test/hfunc_test
	rm ./src/Test\ Files/HFunc\ Test/res.txt

test_vocal:
	$(MAKE) -C ./src/Test\ Files/Math\ Lib\ Test/
	./src/Test\ Files/Math\ Lib\ Test/math_test
	rm ./src/Test\ Files/Math\ Lib\ Test/math_test
	
	$(MAKE) -C ./src/Test\ Files/HFunc\ Test/
	./src/Test\ Files/HFunc\ Test/hfunc_test
	rm ./src/Test\ Files/HFunc\ Test/hfunc_test

build:
	cmake ./src/
	$(MAKE) -C ./src/

run:
	./Calculator
