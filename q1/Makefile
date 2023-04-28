all: _build
_build: _compile
	g++ functions.o main.o -o areaCalculator.exe
_compile: _clean
	g++ -c functions.cpp main.cpp
_clean:
	touch fake.o fake.exe
	rm *.o *.exe
