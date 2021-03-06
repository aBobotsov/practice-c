// SchoolClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct student_t
{
	double grade;
	string name;
} classroom[4];

void calcExcGrades(student_t classroom[]) {
	bool hasExcGrades = false;

	for (int i = 0; i < 4; i++)
	{
		if (classroom[i].grade == 6)
		{
			cout << "Student " << classroom[i].name << " has an excellent grade.\n";
			hasExcGrades = true;
		}
	}
	if (!hasExcGrades)
	{
		cout << "There are no students with an excellent grade.\n";
	}
}

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Please, provide the name for student " << i + 1 << endl;
		cin >> classroom[i].name;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << "Please, provide the grade for student " << i + 1 << " from 2 to 6 " << endl;
		cin >> classroom[i].grade;
	}

	calcExcGrades(classroom);
}



