DESTDIR= $(HOME)
INSLFAGS= -m 0755
testGi=src/testGi

all: build test install

.PHONY: build pack clean test doc run profile install


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
	./src/Test\ Files/Math\ Lib\ Test/math_test#clean 
	rm ./src/Test\ Files/Math\ Lib\ Test/math_test
	/src/Test\ Files/Math\ Lib\ Test
	./src/Test\ Files/HFunc\ Test/hfunc_test
	rm ./src/Test\ Files/HFunc\ Test/hfunc_test

build:
	cd src; cmake ./
	$(MAKE) -C ./src/

run:
	./src/testGi #Temporary Name

install: $(testGi)
	mkdir -p $(DESTDIR)/usr/bin
	install $(INSFLAGS) $(testGi) $(DESTDIR)/usr/bin/

clean:
	rm -r ./src/CMakeFiles -f
	rm -r ./src/testGi_autogen -f
	rm ./src/Makefile -f
	rm ./src/cmake_install.cmake -f
	rm ./src/CMakeCache.txt -f


