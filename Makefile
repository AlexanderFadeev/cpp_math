
ComplexTest:
	g++ ./test/ComplexTest.cpp --std=c++2b -c -o build/ComplexTest.o

VecTest:
	g++ ./test/VecTest.cpp --std=c++2b -c -o build/VecTest.o

MatrixTest:
	g++ ./test/MatrixTest.cpp --std=c++2b -c -o build/MatrixTest.o

test: ComplexTest VecTest MatrixTest
