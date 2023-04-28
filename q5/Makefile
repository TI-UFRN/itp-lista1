all: _build
_build: _compile
	g++ main.o -o program.exe
_compile: _clean
	g++ -c main.cpp
_clean:
	touch fake.o fake.exe
	rm *.o *.exe