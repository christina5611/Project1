#pragma once


#include <string>


using namespace std;
int meet_mom(int momshappinessLevel, string userName)
{
	cout << "\n" << userName << " Looks up but can not tell if they are tripping or if your mom is really standing in front of you.\n";

	// give the user a choice

	cout << "\n" << userName << "'s mom has been gone for over 9 years now. Do you give her a hug or do you walk past her like you do not recognize her.";

	cout << "\n\n Type walk past her or hug her: ";
	// variable to hold the user's choice

	string userChoice;

	// get the user's choice

	getline(cin, userChoice);

	// based on what the user chose, lets influence the story
	if (userChoice == "walk past her" || userChoice == "Walk past her.")
	{
		// if user chose call cops, then do this
		cout << "\nWhen you try to walk past she tries to grab your arm looking hurt.\n";
		cout << "\n Don't you know your own mother.\n";
		momshappinessLevel--;
	}
	else if (userChoice == "hug her" || userChoice == "Hug her." || userChoice == "Hug Her")
	{

		// if user choice = hug her

		cout << "\n You run into Her now open arms .\n";
		cout << "\n As all of the events of the last couple of days catch up with you. You begin to sob in her arms.\n\n";
		momshappinessLevel++;


	}
	else
	{
		// catch all anything else but a valid choice

		cout << "\nHi" << userName << " while you were typing, your mom walks across the street and into one of the many shops. \nShe never saw you standing there.\n\n";
	}
	return momshappinessLevel;
}