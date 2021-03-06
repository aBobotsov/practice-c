// Problem1-SeaTrip.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

static double distanceInKm = 210;
static int tripDays = 3;
static double gasPrice = 1.85;
static double fuelPerHundredKm = 7;

int main()
{
	double totalMoney;
	double totalGasMoney = ((distanceInKm * 2) / 100)*fuelPerHundredKm*gasPrice;

	double foodMoneyPerDay;
	cin >> foodMoneyPerDay;
	double souvenierMoneyPerDay;
	cin >> souvenierMoneyPerDay;
	double hotelMoneyPerDay;
	cin >> hotelMoneyPerDay;

	totalMoney = totalGasMoney + 3 * (foodMoneyPerDay + souvenierMoneyPerDay)
		+ hotelMoneyPerDay * 0.9 + hotelMoneyPerDay * 0.85 + hotelMoneyPerDay * 0.8;
	cout << "Money needed: " << setprecision(2) << fixed << totalMoney << '\n';
	system("pause");
    return 0;
}

