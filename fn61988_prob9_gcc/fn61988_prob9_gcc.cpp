/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 9
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber;
	char operation;
	int result = 0;

	cin >> firstNumber >> operation >> secondNumber;

	if (firstNumber > 15) 
	{
		firstNumber %= 16;
	}
	if (secondNumber > 15) 
	{
		secondNumber %= 16;
	}

	if ((operation == '/' || operation == '%') && secondNumber == 0)
	{
		cout << "Division by zero!\n";
		return 0;
	}

	switch (operation) {
		case '+':
			result = firstNumber + secondNumber;
			break;

		case '-':
			result = firstNumber - secondNumber;
			break;

		case '*':
			result = firstNumber * secondNumber;
			break;

		case '/':
			result = firstNumber / secondNumber;
			break;

		case '%':
			result = firstNumber % secondNumber;
			break;
	}

	result = result % 16;

	if (result < 0)
	{
		result = result + 16;
	}

	cout << result << "\n";

	return 0;
}
