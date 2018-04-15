// FiguresWar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

struct Square
{
	double side;

	void SetSideValue(double value) {
		side = value;
	}
};

struct Rectangle
{
	double sideA;
	double sideB;

	void SetSidesValues(double firsDim, double secondDim) {
		sideA = firsDim;
		sideB = secondDim;
	}
};

double generateRandomDoubleValue() {

	return double(rand() % 99 + 1)/10;
}

double FigureArea (Rectangle rect) {

return rect.sideA * rect.sideB;
}
double FigureArea(Square square) {

	return sqrt(square.side);
}

int main()
{
	int numOfRect, numOfSquares;
	//Zashto iska da im dam st-sti ? Gurmi na 77 i 92 inache ... 
	double sumOfSqArea = 0.0;
	double sumOfRectArea = 0.0;
	//rectangle pointer
	Rectangle *rp;
	//square pointer
	Square *sp;

	// randomizira seed-a na random-a 
	srand(time(NULL));

	cout << "Enter number of rectangles from 1 to 10: " << endl;
	cin >> numOfRect;
	cout << "Enter number of squares from 1 to 10: " << endl;
	cin >> numOfSquares;

	rp = new (nothrow) Rectangle[numOfRect];
	sp = new (nothrow) Square[numOfSquares];

	//checks if dynamic memory can be allocated
	if (rp == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (int i = 0; i < numOfRect; i++)
		{
			rp[i].SetSidesValues(generateRandomDoubleValue(), generateRandomDoubleValue());
			sumOfRectArea += FigureArea(rp[i]);
		}

		//free used dynamic memory
		delete[] rp;
	}

	//checks if dynamic memory can be allocated
	if (sp == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (int i = 0; i < numOfSquares; i++)
		{
			sp[i].SetSideValue(generateRandomDoubleValue());
			sumOfSqArea += FigureArea(sp[i]);
		}

		//free used dynamic memory
		delete[] sp;
	}

	if (sumOfRectArea > sumOfSqArea)
		cout << "Generated rectangles have larger area by " << sumOfRectArea - sumOfSqArea << endl;
	else if (sumOfRectArea < sumOfSqArea)
		cout << "Generated squares have larger area by " << sumOfSqArea - sumOfRectArea << endl;
	else
		cout << "Wow! Both rectangles and squares have the same area of " << sumOfRectArea << endl;

	return 0;
}

