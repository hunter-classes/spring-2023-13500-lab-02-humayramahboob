/* 
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2, TaskA

Write a program valid.cpp, which asks the user to input an 
integer in the range 0 < n < 100. If the number is out of range, 
the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/
#include <iostream>
using namespace std;

int main(){
	cout << "Please enter an integer:";
	int n;
	cin >> n;
	while (0>=n || n>=100){
		cout << "Please re-enter:";
		cin >> n;
	}
	if (0<n && n<100){
		cout << "Number squared is " << n*n << "\n";
	}
	return 0;
}

	
	