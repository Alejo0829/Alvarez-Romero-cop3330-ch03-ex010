#include "Header.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rafael Alvarez-Romero
 */


int main() {
	char op;
	double oper1, oper2, result;
	cout << "Enter a operation to calculate: ";
	op = getchar();
	cin >> oper1; 
	cin >> oper2;
	if (op == '+') {
		result = oper1 + oper2; 
	}
	else if (op == '-') {
		result = oper1 - oper2;
	}
	else if (op == '*') {
		result = oper1 * oper2;
	}
	else if (op == '/') {
		result = oper1 / oper2;
	}
	else {
		cout << "Invalid operation! Please try again with a different operation!";
	}
	cout << "The result of your operation is: " << result;
}