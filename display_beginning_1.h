#pragma once
#include <string>
using namespace std;
int display_beginning_1(int momshappinessLevel, string userName)
{

	cout << " \nWhat's wrong? ,your mom asks as you continue to sob into her arms.";
	cout << "\n Do you tell her what has happened? Type yes or no:";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "yes" || userChoice == "Yes")
	{
		cout << "\nWhy didn't you tell me. Why didn't you tell me what i am!You yell at her becoming angry.\n\n";
		cout << "\nYou have to understand i wanted to tell you but it wasn't safe. She says looking down at you.\n";
		cout << "\nRemoving yourself from her arms, you square your shoulders and look directly into her eyes\n";
		cout << "\nIf you think i've ever known what it feels like to be safe you are sadly mistaken Noti.\n";
		cout << "\nThe iciness in your voice causes your mom to flinch away.\n\n";
		momshappinessLevel--;
	}
	else if (userChoice == "no" || userChoice == "no")
	{
		// if user choice is no
		cout << "\nDrying your eyes you look around hoping no one saw your one moment of weakness.\n";
		cout << "\n I'm sorry you tell her as you rush off in the other direction.\n";
		cout << "\nShe tries to catch you before you disappear ";
		cout << "but your coat jacket slips between her fingers as you round the corner \n\n";
		momshappinessLevel--;
	}
	else
	{
		cout << "\nWhile you were typing, your mom walks across the street and into one of the many shops.She never saw you standing there.\n\n";
	}

	return momshappinessLevel;
}