/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Noah Taylor
 */

// Chapter 3 exercise 10

#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variable declaration
	string operation;
	double op1, op2, ans;
	int flag = 0;

	// Prints title and takes user input
	cout << "This program takes an operation followed by two operands and outputs the result\n";
	cout << "===============================================================================\n\n";
	cout << "Input the operation and operands (formatted + 100 3.14): ";
	cin >> operation >> op1 >> op2;

	// Computes response based on user conditions, prohibits invalid operations
	if (operation == "+")
		ans = op1 + op2;
	else if (operation == "-")
		ans = op1 - op2;
	else if (operation == "*")
		ans = op1 * op2;
	else if (operation == "/")
		ans = op1 / op2;
	else {
		cout << "\nInvalid operation. Please enter +, -, *, or /.";
		flag = 1;
	}

	// Prints result to user
	if (flag == 0)
		cout << "\n" << op1 << " " << operation << " " << op2 << " = " << ans;

	system("pause>0");
}