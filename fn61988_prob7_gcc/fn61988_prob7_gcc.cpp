/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 7
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int littleBlackRadius = 1;
	int littleWhiteRadius = 1;
	int hugeWhiteRadius = 3;
	int hugeBlackRadius = 3;
	int externalRadius = 6;

	double x, y, externalCircle, blackInWhiteCircle, whiteInBlackCircle;
	cin >> x >> y;

	externalCircle = pow(y, 2) + pow(x, 2);
	blackInWhiteCircle = pow(y - 3, 2) + pow(x, 2);
	whiteInBlackCircle = pow(y + 3, 2) + pow(x, 2);

	if (whiteInBlackCircle == pow(littleWhiteRadius, 2) ||
		externalCircle>pow(externalRadius, 2) ||
		blackInWhiteCircle == pow(littleBlackRadius, 2) ||
		(blackInWhiteCircle == pow(hugeWhiteRadius, 2) && x >= 0 && y >= 0) || (whiteInBlackCircle == pow(hugeBlackRadius, 2) && x <= 0 && y <= 0))
	{
		cout << "Neutral\n";
		return 0;
	}
	if (whiteInBlackCircle < pow(hugeBlackRadius, 2))
	{
		cout << "Evil\n";
		return 0;
	}
	if (whiteInBlackCircle < pow(littleWhiteRadius, 2))
	{
		cout << "Good\n";
		return 0;
	}
	if (blackInWhiteCircle < pow(hugeWhiteRadius, 2))
	{
		cout << "Good\n";
		return 0;
	}
	if (blackInWhiteCircle < pow(littleBlackRadius, 2))
	{
		cout << "Evil\n";
		return 0;
	}
	if (x >= 0 && (y >= 0 || y < 0))
	{
		cout << "Evil\n";
		return 0;
	}
	if (x <= 0 && (y >= 0 || y < 0))
	{
		cout << "Good\n";
		return 0;
	}

	return 0;
}

