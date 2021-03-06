// VectorPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVect(vector<int> vector)
{
	for (int x : vector)
		cout << x << '\n';
}

int main()
{
	vector<int> vect;
	
	cout << "Enter integers (enter a non-numeric value to exit): \n";
	for (int num; cin >> num;)
		vect.push_back(num);

	cout << "Printing the raw vector: \n";
	printVect(vect);

	sort(vect.begin(), vect.end());

	cout << "Printing the sorted vector: \n";
	printVect(vect);

    return 0;
}

