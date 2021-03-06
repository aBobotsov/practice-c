// RepetitiveWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printResult(int repeats, string word)
{
	if (repeats > 1)
		cout << "Word " << word << " is repeated the most -> " << repeats << " times!\n";
	else if (repeats == 1)
		cout << "Word " << word << " is repeated " << repeats << " time!\n";
	else
		cout << "All words are unique!\n";
}

int main()
{
	int vSize;
	vector<string> words;
	cout << "Enter number of words: ";
	cin >> vSize;

	//input words
	for (int i = 0; i < vSize; i++)
	{
		string tempWord;
		cout << "Enter a word:\n";
		cin >> tempWord;
		words.push_back(tempWord);
	}

	int maxCount = 0;
	string mostRepWord;

	//find the most repeated word
	for (int i = 0; i < int( words.size()-1); i++)
	{
		int tempCount = 0;
		for (int j = i; j < int (words.size() - 1); j++)
		{
			if (words[i] == words[j+1])
				tempCount++;
		}
		if (tempCount >maxCount)
		{
			maxCount = tempCount;
			mostRepWord = words[i];
		}
	}
	printResult(maxCount, mostRepWord);

    return 0;
}

