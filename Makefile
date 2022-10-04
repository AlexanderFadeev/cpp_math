
ComplexTest:
	g++ ./test/ComplexTest.cpp --std=c++2b -c -o build/ComplexTest.o

test: ComplexTest
