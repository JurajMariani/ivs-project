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
	./src/Test\ Files/Math\ Lib\ Test/math_test > ./src/Test\ Files/Math\ Lib\ Test/res.txt
	# TODO analyze result
	rm ./src/Test\ Files/Math\ Lib\ Test/math_test
	rm ./src/Test\ Files/Math\ Lib\ Test/res.txt
	
	$(MAKE) -C ./src/Test\ Files/HFunc\ Test/
	./src/Test\ Files/HFunc\ Test/hfunc_test > ./src/Test\ Files/HFunc\ Test/res.txt
	# TODO analyze result
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
	cd src; cmake ./
	$(MAKE) -C ./src/

run:
	./src/testGi #Temporary Name

clean:
	rm -r ./src/CMakeFiles
	rm -r ./src/testGi_autogen
	rm ./src/Makefile
	rm ./src/cmake_install.cmake
	rm ./src/CMakeCache.txt


