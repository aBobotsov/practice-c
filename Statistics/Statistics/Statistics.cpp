// Statistics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void sortArrayAsc(int arr[]) {
	int length = arr[0];
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int arrLength) {
//	int length = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element " << i + 1 << " is " << arr[i] << endl;
	}
}

int main()
{
	int myArray[6] = { 6,6,3,3,5,6 };
	int length = 6;
	double mean = 0.0;
	double median = 0.0;
	double biggestNum;

	printArray(myArray,length);

	//Mean calc
	for (int i = 0; i < length; i++)
	{
		mean += myArray[i];
	}
	mean /= myArray[0];
	cout << "The mean of the array is " << mean << endl;

	//Median calc
	sortArrayAsc(myArray);
//	printArray(myArray,length);

	if (length%2==0)
	{
		median = (double)(myArray[(length / 2) - 1] + myArray[length / 2]) / 2;
		cout << "The median of the array is " << median << ".\n";
	}
	else
	{
		median = myArray[length / 2];
		cout << "The median of the array is " << median << ".\n";
	}

	//Mode calc
	int maxOcc = 0;
	int tempMaxOcc = 0;
	int modeIndex = -1;

	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length ; j++)
		{
			if (myArray[j] == myArray[j + 1]) {
				tempMaxOcc++;
			}
		}
		if (tempMaxOcc>maxOcc)
		{
			maxOcc = tempMaxOcc;
			modeIndex = i;
		}
		else if (tempMaxOcc == maxOcc)
		{
			//TODO: Kalinskiiiiiii
		}
	}

	if (modeIndex!=-1)
	{
		cout << "The mode is " << myArray[modeIndex] << endl;
	}
	else
	{
		cout << "There is no mode in the given array!" << endl;
	}

	//Biggest of 3

	if (median >= mean)
	{
		if (median >= myArray[modeIndex])
		{
			biggestNum = median;
		}
		else
		{
			biggestNum = myArray[modeIndex];
		}
	}
	else
	{
		if (mean >= myArray[modeIndex])
		{
			biggestNum = mean;
		}
		else
		{
			biggestNum = myArray[modeIndex];
		}
	}

	cout << "Biggest of the three value is " << biggestNum << endl;
}

