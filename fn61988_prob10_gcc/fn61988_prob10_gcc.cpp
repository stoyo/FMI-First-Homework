/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 10
* @compiler GCC
*
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double	firstEquationX,
			firstEquationY,
			firstEquationResult,

			secondEquationX, 
			secondEquationY, 
			secondEquationResult;

	double xResult, yResult;

	cin.precision(5);
	cin >> firstEquationX 
		>> firstEquationY 
		>> firstEquationResult;

	cin.precision(5);
	cin >> secondEquationX 
		>> secondEquationY 
		>> secondEquationResult;
	
	if ((firstEquationResult * secondEquationX - firstEquationX * secondEquationResult) == 0 && 
		(firstEquationY * secondEquationX - secondEquationY * firstEquationX) == 0)
	{
		cout << "Many solutions\n";
		return 0;
	}
	else if ((secondEquationX * firstEquationResult - firstEquationX * secondEquationResult) != 0 && 
			(firstEquationY * secondEquationX - secondEquationY * firstEquationX) == 0)
	{
		cout << "No solution\n";
		return 0;
	}
	else if ((secondEquationX == 0 && firstEquationX == 0) ||
			(firstEquationY == 0 && secondEquationY == 0))
	{
		cout << "No Solution\n";
		return 0;
	}
	else {
		yResult = (firstEquationResult * secondEquationX - secondEquationResult * firstEquationX) / (secondEquationX * firstEquationY - firstEquationX * secondEquationY);
		if (secondEquationX != 0 && 
			firstEquationX == 0)
		{
			xResult = (secondEquationResult - (yResult * secondEquationY)) / secondEquationX;
		}
		else if ((secondEquationX == 0 || secondEquationX != 0) && 
				 firstEquationX != 0)
		{
			xResult = (firstEquationResult - (yResult * firstEquationY)) / firstEquationX;
		}
		cout << xResult << " " << yResult << "\n";
	}

	return 0;
}

