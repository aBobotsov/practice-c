// SimpleNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

void printAllSimpleNumbersFromOneTo(int upTo)
{
	cout << "The prime numbers from 1 to " << upTo << " are:\n";

	for (int i = 2; i < upTo; i++)
	{
		bool isPrime = true;

		for (int j = i-1; j > 1; j--)
		{
			if (i%j==0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime == true)
			cout << i << '\n';
		
	}
}

int main()
{
	int number = 0;

	cout << "Enter the last number to check: ";
	cin >> number;
	printAllSimpleNumbersFromOneTo(number);

	return 0;
}

