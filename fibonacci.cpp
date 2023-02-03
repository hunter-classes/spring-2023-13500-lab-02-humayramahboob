/* 
Author: Humayra Mahboob
Course: CS-135
Instructor: Michael Zamansky 
Assignment: Lab2, TaskD

Write a program fibonacci.cpp, which uses 
an array of ints to compute and print all 
Fibonacci numbers from F(0) to F(59).
*/
#include <iostream>
using namespace std;

int main() {
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;
	fib[i] = fib[i-1] + fib[i-2];
	for (int i: fib){
		cout << i << "\n";
	}
	return 0;
}
