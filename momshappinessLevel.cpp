#include <iostream>
#include <string>


using namespace std;
// prototyping  functions
int player_name();
int meet_mom(int momshappinessLevel);
void display_intro();
int display_beginning(int momshappinessLevel);

int main()
{
	
	// if moms happiness is zero she is sad and you lose.
	// if moms happiness goes to ten she is happy and you win.
	int momshappinessLevel = 5;
	cout << "\n\nMom's happiness starts at a " << momshappinessLevel << endl;
	
	display_intro();
	
	momshappinessLevel = meet_mom(momshappinessLevel);
	cout << "\nMom's happiness is now at a " << momshappinessLevel << endl;

	momshappinessLevel = display_beginning(momshappinessLevel);
	cout << "\nMom's happiness is now at a " << momshappinessLevel << endl;
	
	

	return 0;
}


int player_name()
{
	cout << "\nType your name: ";
	string userChoice;
	getline(cin, userChoice);
	return player_name;
}

void display_intro()
{
	

	cout << "\n\n\t\t***** My text adventure*****\n\n";

	cout << "\n Shaking your head you can not believe what just happened. Did you really see what you just saw? \n";
}

int meet_mom(int momshappinessLevel)
{
	cout << "\n  Looking up you can not tell if you are tripping or if your mom is really standing in front of you.\n";

	// give the user a choice

	cout << "\nYour mom has been gone for over 9 years now. Do you give her a hug or do you walk past her as if you do not recognize her.  ";

	cout << "\n\n Type walk past her or hug her: ";
	// variable to hold the user's choice

	string userChoice;

	// get the user's choice

	getline(cin, userChoice);

	// based on what the user chose, lets influence the story
	if (userChoice == "walk past her" || userChoice == "Walk past her.")
	{
		// if user chose call cops, then do this
		cout << "\nWhen you try to walk past she grabs your arm looking hurt.\n";
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

		cout << "\nWhile you were typing, your mom walks across the street and into one of the many shops.She never saw you standing there.\n\n";
	}
	return momshappinessLevel;
}



int display_beginning(int momshappinessLevel)
{

	cout << " \nWhat's wrong? ,your mom asks as you continue to sob into her arms.";
	cout << "\n Do you tell her what has happened? Type yes or no:";
	string userChoice;
	getline(cin, userChoice);

	if (userChoice == "yes" || userChoice == "yes")
	{
		cout << "\nWhy didn't you tell me. Why didn't you tell me what i am!You yell at her becoming angry.\n\n";
		cout << "\nYou have to understand i wanted to tell you but it wasn't safe. She says looking down at you.\n";
		cout << "\nRemoving yourself from her arms, you square your shoulders and look directly into her eyes\n";
		cout << "\nIf you think i've ever known what it feels like to be safe you are sadly mistaken Noti.\n";
		cout << "\nThe iciness in your voice causes your mom to flinch away.";
		momshappinessLevel--;
	}
	else if (userChoice == "no" || userChoice == "no")
	{
		// if user choice is no
		cout << "\nDrying your eyes you look around hoping no one saw your one moment of weakness.\n";
		cout << "\n I'm sorry you tell her as you rush off in the other direction.\n";
		cout << "\nShe tries to catch you before you disappear ";
		cout << "but your coat jacket slips between her fingers as you round the corner ";
		momshappinessLevel--;
	}
	else
	{
		cout << "\nWhile you were typing, your mom walks across the street and into one of the many shops.She never saw you standing there.\n\n";
	}

	return momshappinessLevel;
}
