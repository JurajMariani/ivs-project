#/*****************************************************************
# * Team: QWERTZ
# * Author: Juraj Mariani (xmaria03)
# *
# *****************************************************************



DESTDIR= $(HOME)
INSLFAGS= -m 0755
testGi= Calculario

TESTM_PATH = ./Test\ Files/Math\ Lib\ Test/
TESTH_PATH = ./Test\ Files/HFunc\ Test/
CMAKE_DIR = ./CMake/
PROFILE_DIR = ../profiling/
TEST_ANALYSIS = ./Test\ Files/

all: build test install clean

.PHONY: build pack clean test doc run profile install


profile:	
	$(MAKE) ref_output -C $(PROFILE_DIR)


doc: Doxyfile
	doxygen $^

pack:
	#TBA

test:
	$(MAKE) -C $(TESTM_PATH)
	$(TESTM_PATH)math_test > $(TESTM_PATH)res.txt
	$(MAKE) -C $(TESTH_PATH)
	$(TESTH_PATH)hfunc_test > $(TESTH_PATH)res.txt
	#------------------------------------------------------------------
	# Test analysis
	cd $(TEST_ANALYSIS) ; chmod 777 test_proof.sh ; ./test_proof.sh
	#------------------------------------------------------------------
	rm $(TESTM_PATH)math_test
	rm $(TESTM_PATH)res.txt
	rm $(TESTH_PATH)hfunc_test
	rm $(TESTH_PATH)res.txt

test_vocal:
	$(MAKE) -C $(TESTM_PATH)
	$(TESTM_PATH)math_test
	rm $(TESTM_PATH)math_test
	$(MAKE) -C $(TESTH_PATH)
	$(TESTH_PATH)hfunc_test
	rm $(TESTH_PATH)hfunc_test

build:
	cd CMake/; cmake ../
	$(MAKE) -C ./CMake
	cd CMake/; mv testGi ../
	mv testGi Calculario

run:
	./Calculario

install: $(testGi)
	mkdir -p $(DESTDIR)/usr/bin
	install $(INSFLAGS) $(testGi) $(DESTDIR)/usr/bin/

clean:
	rm -r $(CMAKE_DIR)CMakeFiles -f
	rm -r $(CMAKE_DIR)testGi_autogen -f
	rm $(CMAKE_DIR)Makefile -f
	rm $(CMAKE_DIR)cmake_install.cmake -f
	rm $(CMAKE_DIR)CMakeCache.txt -f
	$(MAKE) clean -C $(TESTM_PATH)
	$(MAKE) clean -C $(TESTH_PATH)


