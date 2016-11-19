/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 5
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double 
		firstX, 
		firstY, 
		secondX, 
		secondY;

	cin.precision(3);

	cin >> firstX >> firstY;
	cin >> secondX >> secondY;

	firstX = firstX + secondX;
	firstY = firstY + secondY;

	double circle = pow(firstY, 2) + pow(firstX, 2);

	int radius3 = 1;
	int radius2 = 3;
	int radius1 = 8;

	if (circle == pow(radius3, 2))
	{
		cout << 0 << "\n";
		return 0;
	}
	else if(circle < pow(radius3, 2))
	{
		cout << 60 << "\n";
		return 0;
	}
	if (circle == pow(radius2, 2)) 
	{
		cout << 0 << "\n";
		return 0;
	}
	else if (circle < pow(radius2, 2))
	{
		cout << 20 << "\n";
		return 0;
	}
	if (circle == pow(radius1, 2)) 
	{
		
		cout << 0 << "\n";
	}
	else if (circle < pow(radius1, 2))
	{
		cout << 10 << "\n";
		return 0;
	}
	else
	{
		cout << 0 << "\n";
	}

	return 0;
}
