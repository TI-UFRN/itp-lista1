all: _build
_build: _compile
	g++ queue.o stack.o main.o -o program.exe
_compile: _clean
	g++ -c queue.cpp stack.cpp main.cpp
_clean:
	touch fake.o fake.exe
	rm *.o *.exe