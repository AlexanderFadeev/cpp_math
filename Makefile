
ComplexTest:
	g++ ./src/test/ComplexTest.cpp --std=c++2b -c -o build/ComplexTest.o

VecTest:
	g++ ./src/test/VecTest.cpp --std=c++2b -c -o build/VecTest.o

MatrixTest:
	g++ ./src/test/MatrixTest.cpp --std=c++2b -c -o build/MatrixTest.o

MathTest:
	g++ ./src/test/MathTest.cpp --std=c++2b -c -o build/MathTest.o

test: ComplexTest VecTest MatrixTest MathTest
