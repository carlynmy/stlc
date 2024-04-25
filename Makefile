CXX=g++
CXX_FLAGS=-Wall -Werror -Wextra
GCOV_FLAGS= --coverage
GCOV_LIBS= -lgcov

DEBUG_BUILD_TYPE=-DCMAKE_BUILD_TYPE=Debug
GCOV_REPORT_FLAGS=-DSTLC_COVERAGE_FLAGS:STRING="$(GCOV_FLAGS)"
GCOV_REPORT_LIBS=-DSTLC_COVERAGE_LIBS:STRING="$(GCOV_LIBS)"
RELEASE_BUILD_TYPE=-DCMAKE_BUILD_TYPE=Release
GCOV_NO_REPORT_FLAGS=-DSTLC_COVERAGE_FLAGS:STRING=""
GCOV_NO_REPORT_LIBS=-DSTLC_COVERAGE_LIBS:STRING=""


REPORT_BUILD= $(DEBUG_BUILD_TYPE) $(GCOV_REPORT_FLAGS) $(GCOV_REPORT_LIBS)
STANDART_BUILD= $(DEBUG_BUILD_TYPE) $(GCOV_NO_REPORT_FLAGS) $(GCOV_NO_REPORT_LIBS)

PATH_BUILD=build
PATH_REPORT=report

.PHONY: all clean rebuild test gcov_report valgrind leaks build_tests build_tests_cov

all: test

clean:
	rm -rf $(PATH_BUILD)
	rm -rf $(PATH_REPORT)

rebuild: clean all

test: build_tests
	./$(PATH_BUILD)/stlc_tests

gcov_report: build_tests_cov 
	rm -rf $(PATH_REPORT)
	./$(PATH_BUILD)/stlc_tests
	mkdir $(PATH_REPORT)	
	gcovr --html-details -o $(PATH_REPORT)/index.html
	open $(PATH_REPORT)/index.html

valgrind: build_tests
	valgrind $(PATH_BUILD)/stlc_tests

leaks: build_tests
	leaks -atExit -- $(PATH_BUILD)/stlc_tests

build_tests:
	cmake -B $(PATH_BUILD) $(STANDART_BUILD) 
	cmake --build $(PATH_BUILD) --target stlc_tests

build_tests_cov:
	cmake -B $(PATH_BUILD) $(REPORT_BUILD) 
	cmake --build $(PATH_BUILD) --target stlc_tests
	