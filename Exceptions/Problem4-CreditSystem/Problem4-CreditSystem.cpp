// Problem4-CreditSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double finalCredits = 0.0;
	double sumOfGrades = 0.0;

	int numOfCourses;
	cin >> numOfCourses;
	for (int i = 0; i < numOfCourses; i++)
	{
		int creditsPlusGrade;
		cin >> creditsPlusGrade;

		int courseGrade = creditsPlusGrade % 10;
		sumOfGrades += courseGrade;

		switch (courseGrade)
		{
		case 2: finalCredits += 0;
			break;
		case 3: finalCredits += (creditsPlusGrade / 10) * 0.5;
			break;
		case 4: finalCredits += (creditsPlusGrade / 10) * 0.7;
			break;
		case 5: finalCredits += (creditsPlusGrade / 10) * 0.85;
			break;
		case 6: finalCredits += (creditsPlusGrade / 10);
		}
	}
	cout << setprecision(2) << fixed << finalCredits << '\n';
	cout << setprecision(2) << fixed << sumOfGrades/numOfCourses << '\n';
	system("pause");

    return 0;
}

