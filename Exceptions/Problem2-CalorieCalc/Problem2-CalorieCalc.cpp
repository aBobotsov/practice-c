// Problem2-CalorieCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double calories;

	char gender;
	cin >> gender;
	double weight;
	cin >> weight;
	double heightInMetres;
	cin >> heightInMetres;
	int age;
	cin >> age;
	string activityLevel;
	cin >> activityLevel;

	if (gender == 'm' || gender == 'M')
		calories = 66 + (13.7 * weight) + (5 * heightInMetres * 100) - (6.8 * age);
	else
		calories = 655 + (9.6 * weight) + (1.8 * heightInMetres * 100) - (4.7 * age);

	switch (activityLevel[0])
	{
	case 's': calories *= 1.2;
		break;
	case 'l': calories *= 1.375;
		break;
	case 'm': calories *= 1.55;
		break;
	case 'v': calories *= 1.725;
		break;
	default: cout << "Invalid activity level entered!.";
		break;
	}

	cout << "To maintain your current weight you will need " 
	<< setprecision(0) << fixed << calories << " calories per day.\n";
	system("pause");
    return 0;
}

