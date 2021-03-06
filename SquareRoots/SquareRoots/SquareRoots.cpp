// SquareRoots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;

const int arraySize = 5;

double printSqrtAndFindMax(double arr[]) 
{
	double max = 0.0;

	for (int i = 0; i < arraySize; i++)
	{
		double result = 0.0;
		result = sqrt(arr[i]);
		cout << "The square root of " << arr[i] << " is -> " << result << endl;
		if (result > max)
			max = result;
	}
	return max;
}

int main()
{
	double numArrray[arraySize];
	double maxSqrt = 0.0;
	//like a pimp
	double minArr = DBL_MAX;

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Please, enter number " << i + 1 << ": ";
		cin >> numArrray[i];
		if (numArrray[i] < minArr)
			minArr = numArrray[i];
	}

	maxSqrt = printSqrtAndFindMax(numArrray);

	if (maxSqrt > minArr)
		cout << "The max square root -> " << maxSqrt << " is bigger than the min array element.\n";
	else if (maxSqrt == minArr)
		cout << "The max square root and the min array element are equal -> " << maxSqrt << endl;
	else
		cout << "The min array element -> " << minArr << " is bigger than the max square root.\n";

    return 0;
}

