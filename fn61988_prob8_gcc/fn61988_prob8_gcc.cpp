/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 8
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 50 20 10 5 2 1

	int userNum, fullCount, fiftiesCount, twentiesCount, tensCount, fivesCount, twosCount, onesCount;
	string result, plus = "";

	cin >> userNum;

	fullCount = userNum;

	fiftiesCount = userNum / 50;
	userNum = userNum % 50;

	twentiesCount = userNum / 20;
	userNum = userNum % 20;

	tensCount = userNum / 10;
	userNum = userNum % 10;

	fivesCount = userNum / 5;
	userNum = userNum % 5;

	twosCount = userNum / 2;
	userNum = userNum % 2;

	onesCount = userNum / 1;
	userNum = userNum % 1;

	result = to_string(fullCount) + " = ";

	if (fiftiesCount != 0)
	{
		if (twentiesCount != 0 || tensCount != 0 || fivesCount != 0 || twosCount != 0 || onesCount != 0)
		{
			plus = " + ";
		}
		else
		{
			plus = "";
		}
		result += to_string(fiftiesCount) + "*50" + plus;
	}

	if (twentiesCount != 0)
	{
		if (tensCount != 0 || fivesCount != 0 || twosCount != 0 || onesCount != 0)
		{
			plus = " + ";
		}
		else
		{
			plus = "";
		}
		result += to_string(twentiesCount) + "*20" + plus;
	}

	if (tensCount != 0)
	{
		if (fivesCount != 0 || twosCount != 0 || onesCount != 0)
		{
			plus = " + ";
		}
		else
		{
			plus = "";
		}
		result += to_string(tensCount) + "*10" + plus;
	}

	if (fivesCount != 0)
	{
		if (twosCount != 0 || onesCount != 0)
		{
			plus = " + ";
		}
		else
		{
			plus = "";
		}
		result += to_string(fivesCount) + "*5" + plus;
	}

	if (twosCount != 0)
	{
		if (onesCount != 0)
		{
			plus = " + ";
		}
		else
		{
			plus = "";
		}
		result += to_string(twosCount) + "*2" + plus;
	}

	if (onesCount != 0)
	{
		result += to_string(onesCount) + "*1";
	}

	cout << result << "\n";

	return 0;
}

