/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 2
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long userNum;
	int birthYear, birthMonth, birthDay, tempBirthMonth, tempBirthYear, genderDigit, weightSum;
	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit, seventhDigit, eigthDigit, ninthDigit, tenthDigit;
	string gender, dayString, monthString;

	cin >> userNum;

	birthYear = userNum / 100000000;
	birthMonth = (userNum / 1000000) - ((userNum / 100000000) * 100);
	birthDay = (userNum / 10000) - ((userNum / 1000000) * 100);
	genderDigit = (userNum / 10) - ((userNum / 100) * 10);

	if (birthDay > 31 || birthDay < 1)
	{
		cout << "Bad input data!\n";
		return 0;
	}

	if (birthMonth > 0 && birthMonth < 13)
	{
		tempBirthMonth = birthMonth;
		tempBirthYear = 1900 + birthYear;
	}
	else if (birthMonth > 20 && birthMonth < 33)
	{
		tempBirthMonth = birthMonth - 20;
		tempBirthYear = 1800 + birthYear;
	}
	else if (birthMonth > 40 && birthMonth < 53)
	{
		tempBirthMonth = birthMonth - 40;
		tempBirthYear = 2000 + birthYear;
	}
	else
	{
		cout << "Bad input data!\n";
		return 0;
	}

	if ((tempBirthMonth == 4 ||
		tempBirthMonth == 6 ||
		tempBirthMonth == 9 ||
		tempBirthMonth == 11) &&
		birthDay == 31)
	{
		cout << "Bad input data!\n";
		return 0;
	}

	if (tempBirthMonth == 2)
	{
		if (((tempBirthYear % 4 != 0) || (tempBirthYear % 100 == 0)) && birthDay > 28)
		{
			cout << "Bad input data!\n";
			return 0;
		}
		if ((tempBirthYear % 4 == 0) && (tempBirthYear % 100 != 0) && birthDay > 29)
		{
			cout << "Bad input data!\n";
			return 0;
		}
	}

	gender = genderDigit % 2 ? " F" : " M";
	tenthDigit = userNum % 10;
	ninthDigit = (userNum / 10) - (userNum / 100) * 10;
	eigthDigit = (userNum / 100) - (userNum / 1000) * 10;
	seventhDigit = (userNum / 1000) - (userNum / 10000) * 10;
	sixthDigit = (userNum / 10000) - (userNum / 100000) * 10;
	fifthDigit = (userNum / 100000) - (userNum / 1000000) * 10;
	fourthDigit = (userNum / 1000000) - (userNum / 10000000) * 10;
	thirdDigit = (userNum / 10000000) - (userNum / 100000000) * 10;
	secondDigit = (userNum / 100000000) - (userNum / 1000000000) * 10;
	firstDigit = (userNum / 1000000000) - (userNum / 10000000000) * 10;

	monthString = tempBirthMonth > 9 ? to_string(tempBirthMonth) : "0" + to_string(tempBirthMonth);
	dayString = birthDay > 9 ? to_string(birthDay) : "0" + to_string(birthDay);

	weightSum =
		firstDigit * 2 +
		secondDigit * 4 +
		thirdDigit * 8 +
		fourthDigit * 5 +
		fifthDigit * 10 +
		sixthDigit * 9 +
		seventhDigit * 7 +
		eigthDigit * 3 +
		ninthDigit * 6;

	if (weightSum % 11 < 10)
	{
		if (weightSum % 11 != tenthDigit)
		{
			cout << "Bad input data!\n";
			return 0;
		}
	}
	else
	{
		if (tenthDigit != 0)
		{
			cout << "Bad input data!\n";
			return 0;
		}
	}

	cout << dayString << "." << monthString << "." << tempBirthYear << gender << "\n";

	return 0;
}

