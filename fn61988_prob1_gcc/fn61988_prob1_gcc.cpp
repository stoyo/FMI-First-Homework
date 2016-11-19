/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stoyan Genchev
* @idnumber 61988
* @task 1
* @compiler GCC
*
*/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int userNum; string romanNum = "";

	cin >> userNum;

	if (userNum < 1 || userNum > 3000) {
		cout << "Invalid number!\n";
		return 0;
	}

	int ones = userNum % 10;
	int tens = (userNum % 100) / 10;
	int hundreds = (userNum % 1000) / 100;
	int thousands = userNum / 1000;

	if (thousands > 0) {
		switch (thousands) {
			case 1:
				romanNum += "M"; break;
			case 2:
				romanNum += "MM"; break;
			case 3:
				romanNum += "MMM"; break;
			default:
				romanNum += "";
		}
	}

	if (hundreds > 0) {
		switch (hundreds) {
			case 1:
				romanNum += "C"; break;
			case 2:
				romanNum += "CC"; break;
			case 3:
				romanNum += "CCC"; break;
			case 4:
				romanNum += "CD"; break;
			case 5:
				romanNum += "D"; break;
			case 6:
				romanNum += "DC"; break;
			case 7:
				romanNum += "DCC"; break;
			case 8:
				romanNum += "DCCC"; break;
			case 9:
				romanNum += "CM"; break;
			default:
				romanNum += "";
		}
	}

	if (tens > 0) {
		switch (tens) {
			case 1:
				romanNum += "X"; break;
			case 2:
				romanNum += "XX"; break;
			case 3:
				romanNum += "XXX"; break;
			case 4:
				romanNum += "XL"; break;
			case 5:
				romanNum += "L"; break;
			case 6:
				romanNum += "LX"; break;
			case 7:
				romanNum += "LXX"; break;
			case 8:
				romanNum += "LXXX"; break;
			case 9:
				romanNum += "XC"; break;
			default:
				romanNum += "";
		}
	}

	if (ones > 0) {
		switch (ones) {
			case 1:
				romanNum += "I"; break;
			case 2:
				romanNum += "II"; break;
			case 3:
				romanNum += "III"; break;
			case 4:
				romanNum += "IV"; break;
			case 5:
				romanNum += "V"; break;
			case 6:
				romanNum += "VI"; break;
			case 7:
				romanNum += "VII"; break;
			case 8:
				romanNum += "VIII"; break;
			case 9:
				romanNum += "IX"; break;
			default:
				romanNum += "";
		}
	}

	cout << romanNum << "\n";

	return 0;
}
