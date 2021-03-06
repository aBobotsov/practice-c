#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int NUM_OF_PATIENTS = 3;

struct Patient {

	string name;
	int arrived;

	void printPatientDetails()
	{
		cout << "-- Patient: " << name << endl;
		cout << "~ Appointment at: " << arrived << endl;
	}
};

struct Doc
{
	string docName;
	Patient patients[NUM_OF_PATIENTS];
};

bool isFemale(string name) {

	if (name[name.size()-1] == 'a' || name[name.size()-1] == 'q')
		return true;
	else
		return false;
}

int compareArrivalTimes(Patient one, Patient two) {

	if (one.arrived < two.arrived)
		return -1;
	else if (one.arrived > two.arrived)
		return 1;
	else
		return 0;
}

void sortPatientsByArrivalTime(Patient patients[], int queueSize) {

	for (int i = 0; i < queueSize - 1; i++)
	{
		for (int j = 0; j < queueSize - 1 - i; j++)
		{
			int comparer = compareArrivalTimes(patients[j], patients[j + 1]);
			if (comparer == 1)
			{
				Patient tempPatient;
				tempPatient = patients[j];
				patients[j] = patients[j + 1];
				patients[j + 1] = tempPatient;
			}
			else if (comparer == 0)
				cout << "There are two appointments with the same start time!\n";
		}
	}
}

void PrintDocPatients(Doc doctor) 
{
	sortPatientsByArrivalTime(doctor.patients, NUM_OF_PATIENTS);
	bool isThereMatchingPatient = false;
	cout << "Patients matching dr." << doctor.docName << "'s gender:\n";

	for (int i = 0; i < NUM_OF_PATIENTS; i++) 
	{
		if (isFemale(doctor.patients[i].name) == isFemale(doctor.docName))
		{
			isThereMatchingPatient = true;
			doctor.patients[i].printPatientDetails();
		}
	}
	if (isThereMatchingPatient == false)
		cout << "None.\n";
}

int main()
{
	Doc doctor;
	cout << "Enter doctor's name: ";
	cin >> doctor.docName;

	for (int i = 0; i < NUM_OF_PATIENTS; i++)
	{
		cout << "Enter patient " << i + 1 << " name: ";
		cin >> doctor.patients[i].name;
		cout << "Enter time of arrival in military format: ";
		cin >> doctor.patients[i].arrived;
	}

	PrintDocPatients(doctor);
    return 0;
}

