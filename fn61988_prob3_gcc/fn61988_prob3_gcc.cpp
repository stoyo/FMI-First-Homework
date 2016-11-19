/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 3
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	unsigned int userNum;
	int remainder;

	cin >> userNum;

	remainder = userNum % 16;
	userNum /= 16;

	if (userNum == 0)
	{
		cout << "Yes\n";
		return 0;
	}

	if (userNum % 16 != (unsigned)remainder)
	{
		cout << "No\n";
		return 0;
	}
	else 
	{
		userNum /= 16;
	}

	if (userNum == 0) 
	{
		cout << "Yes\n";
		return 0;
	}
	else 
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}

	if (userNum == 0) 
	{
		cout << "Yes\n";
		return 0;
	}
	else 
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}

	if (userNum == 0) 
	{
		cout << "Yes\n";
		return 0;
	}
	else 
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}

	if (userNum == 0)
	{
		cout << "Yes\n";
		return 0;
	}
	else
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}

	if (userNum == 0)
	{
		cout << "Yes\n";
		return 0;
	}
	else
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}

	if (userNum == 0) 
	{
		cout << "Yes\n";
		return 0;
	}
	else 
	{
		if (userNum % 16 != (unsigned)remainder)
		{
			cout << "No\n";
			return 0;
		}
		else
		{
			userNum /= 16;
		}
	}
	
	return 0;
}
