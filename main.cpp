/*
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2, TaskB

Write a program print-interval.cpp that asks the user to 
input two integers L and U (representing the lower and upper 
limits of the interval), and print out all integers in the range 
L ≤ i < U separated by spaces. Notice that we include the lower limit, 
but exclude the upper limit.

Write the function in funcs.cpp and call it in main.cpp
*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main(){
	print_interval(0,10);
	cout<< "\n";
	return 0;
}


