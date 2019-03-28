// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Database.h"

using namespace std;
using namespace AirlineReservationSystem;

int displayMenu();
void reserveSeat(Database& db);
void flightSchedule(Database& db);
void displayPassengerInfo(Database& db);
void displayFlightInfo(Database& db);
void passengerTicketInfo(Database& db);

int main()
{
	Database airlineDB;

	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			reserveSeat(airlineDB);
			break;
		case 2:
			flightSchedule(airlineDB);
			break;
		case 3:
			displayPassengerInfo(airlineDB);
			break;
		case 4:
			displayFlightInfo(airlineDB);
			break;
		case 5:
			passengerTicketInfo(airlineDB);
			break;
		default:
			cerr << "Unknown command. Try again." << endl;
			break;
		}
	}

	return 0;
}

int displayMenu() {
	int selection;
	cout << endl;
	cout << "Flight Reservation System" << endl;
	cout << "------------------" << endl;
	cout << "1. Reserve a seat" << endl;
	cout << "2.Flight schedule" << endl;
	cout << "3.Passenger info" << endl;
	cout << "4.Flight details" << endl;
	cout << "5. Passenger ticket info" << endl;
	cout << "0.Quit" << endl;
	cout << "---------------------------" << endl;

	cin >> selection;
	return selection;
}

void doHire(Database& db) {
	string firstName;
	string lastName;
	cout << "First name?";
	cin >> firstName;
	cout << "Last name?";
	cin >> lastName;

	db.addEmployee(firstName, lastName);
}

void doFire(Database& db) {
	int employeeNumber;
	cout << "Employee number? ";
	cin >> employeeNumber;

	try {
		Employee& emp = db.getEmployee(employeeNumber);
		emp.fire();
		cout << "Employee " << employeeNumber << "terminated." << endl;
	}
	catch (const logic_error& exception) {
		cerr << "unable to terminate the employee: " << exception.what() << endl;
	}
}

void doPromote(Database& db) {
	int employeeNumber;
	int raiseAmount;

	cout << "Employee number? ";
	cin >> employeeNumber;
	cout << "Raise amount? ";
	cin >> raiseAmount;

	try {
		Employee& emp = db.getEmployee(employeeNumber);
		emp.promote(raiseAmount);
		cout << "Employee " << employeeNumber << "promoted." << endl;
	}
	catch (const logic_error& exception) {
		cerr << "unable to promote the employee: " << exception.what() << endl;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
