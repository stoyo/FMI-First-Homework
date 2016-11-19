/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 6
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int squareOneLeftBottomX, squareOneLeftBottomY, squareOneHeight, squareOneWidth;
	int squareOneLeftTopX, squareOneLeftTopY, squareOneRightBottomX, squareOneRightBottomY;
	int squareTwoLeftBottomX, squareTwoLeftBottomY, squareTwoHeight, squareTwoWidth;
	int squareTwoLeftTopX, squareTwoLeftTopY, squareTwoRightBottomX, squareTwoRightBottomY;
	double overlappedTopLeftX, overlappedTopLeftY, overlappedBottomRightX, overlappedBottomRightY, overlappedWidth, overlappedHeight;

	cin >> squareOneLeftBottomX >> squareOneLeftBottomY >> squareOneHeight >> squareOneWidth;
	cin >> squareTwoLeftBottomX >> squareTwoLeftBottomY >> squareTwoHeight >> squareTwoWidth;

	squareOneLeftTopX = squareOneLeftBottomX;
	squareOneLeftTopY = squareOneLeftBottomY + squareOneHeight;

	squareOneRightBottomX = squareOneLeftBottomX + squareOneWidth;
	squareOneRightBottomY = squareOneLeftBottomY;

	squareTwoLeftTopX = squareTwoLeftBottomX;
	squareTwoLeftTopY = squareTwoLeftBottomY + squareTwoHeight;

	squareTwoRightBottomX = squareTwoLeftBottomX + squareTwoWidth;
	squareTwoRightBottomY = squareTwoLeftBottomY;

	if (
		squareOneLeftTopX < squareTwoRightBottomX &&
		squareOneRightBottomX > squareTwoLeftTopX &&
		squareOneLeftTopY > squareTwoRightBottomY &&
		squareOneRightBottomY < squareTwoLeftTopY)
	{
		overlappedTopLeftX = max(squareOneLeftTopX, squareTwoLeftTopX);
		overlappedTopLeftY = min(squareOneLeftTopY, squareTwoLeftTopY);
		overlappedBottomRightX = min(squareOneRightBottomX, squareTwoRightBottomX);
		overlappedBottomRightY = max(squareOneRightBottomY, squareTwoRightBottomY);

		overlappedWidth = abs(overlappedBottomRightX - overlappedTopLeftX);
		overlappedHeight = abs(overlappedTopLeftY - overlappedBottomRightY);

		cout << overlappedWidth * overlappedHeight << "\n";

	}
	else
	{
		cout << "0\n";
	}

	return 0;
}

