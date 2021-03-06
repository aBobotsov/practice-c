// Problem3-OnlineEducation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int roomCapacity = 600;
	int sumOfOnlineStuds=0;
	int sumOfOnsiteStuds=0;
	int totalSumOfStuds=0;

	for (int i = 0; i < 3; i++)
	{
		string formType;
		cin >> formType;
		int formNumOfStuds;
		cin >> formNumOfStuds;

		if (formType == "onsite")
		{
			sumOfOnsiteStuds += formNumOfStuds;
			if (sumOfOnsiteStuds > roomCapacity)
			{
				sumOfOnlineStuds += (sumOfOnsiteStuds - 600);
				sumOfOnsiteStuds = 600;
			}
		}
		else
			sumOfOnlineStuds += formNumOfStuds;

		totalSumOfStuds += formNumOfStuds;
	}

	cout << "Online students: " << sumOfOnlineStuds << '\n';
	cout << "Onsite students: " << sumOfOnsiteStuds << '\n';
	cout << "Total students: " << totalSumOfStuds << '\n';
	system("pause");
}

