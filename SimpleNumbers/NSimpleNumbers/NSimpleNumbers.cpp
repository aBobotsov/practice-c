// NSimpleNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void printNSimpleNumbers(int num)
{
	bool areAllPrinted = false;
	int printCount = 0;

	cout << "The first " << num << " prime numbers are:\n";

	for (int i = 2; areAllPrinted == false; i++)
	{
		bool isPrime = true;

		for (int j = i - 1; j > 1; j--)
		{
			if (i%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime == true)
		{
			cout << i << '\n';
			printCount++;
		}
		if (printCount==num)
			areAllPrinted = true;
	}
}

int main()
{
	int number = 0;

	cout << "Enter the number of prime numbers to print: ";
	cin >> number;
	printNSimpleNumbers(number);

	return 0;
}

