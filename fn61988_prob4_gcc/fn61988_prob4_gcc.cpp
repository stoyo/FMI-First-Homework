/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 4
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
	char pieceType, pieceX, kingX;
	int pieceY, kingY;

	cin >> pieceType;
	cin >> pieceX >> pieceY;
	cin >> kingX >> kingY;

	int pieceNumX = pieceX - 96; // char to int
	int kingNumX = kingX - 96; // char to int

	if (pieceType == 'Q') { // queen
		if ((kingY == pieceY || abs(kingNumX - pieceX) != abs(kingY - pieceY)) &&
			(kingNumX != pieceNumX && kingY != pieceY)) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}
	if (pieceType == 'R') { // rook
		if (kingNumX != pieceNumX && kingY != pieceY) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}
	if (pieceType == 'N') { // knight

		if ((kingY == pieceY + 2 && (pieceNumX + 1 == kingNumX || pieceNumX - 1 == kingNumX)) ||
			(kingY == pieceY - 2 && (pieceNumX + 1 == kingNumX || pieceNumX - 1 == kingNumX)) ||
			(pieceNumX + 2 == kingNumX && (pieceY + 1 == kingY || pieceY - 1 == kingY)) ||
			(pieceNumX - 2 == kingNumX && (pieceY + 1 == kingY || pieceY - 1 == kingY)))
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}

	}
	if (pieceType == 'B') { // bishop
		if (kingY == pieceY || abs(kingNumX - pieceX) != abs(kingY - pieceY)) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}
	
	return 0;
}
