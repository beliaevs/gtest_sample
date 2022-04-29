test.exe: main.cpp mylib.cpp mylib_test.cpp mylib.h Makefile
	g++ -o test.exe -std=c++17 main.cpp mylib.cpp mylib_test.cpp -lgtest -lgmock

clean:
	rm test.exe
