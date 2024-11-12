1: clean
	@g++ main.cpp -o 1_main
	@./1_main

2: clean
	@g++ test.cpp -o 2_test
	@./2_test

clean:
	@rm -f 1_main
	@rm -f 2_test 