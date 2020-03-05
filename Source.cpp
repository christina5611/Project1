#include <iostream>
#include <string>


using namespace std;
// prototyping  functions
int player_name();
int meet_mom(int momshappinessLevel);
void display_intro();
int display_beginning_1(int momshappinessLevel);
int display_beginning_2(int momshappinessLevel);
int main()
{
	player_name();
	// if moms happiness is zero she is sad and you lose.
	// if moms happiness goes to ten she is happy and you win.
	int momshappinessLevel = 5;
	cout << "\n\nMom's happiness starts at a: " << momshappinessLevel << endl;

	display_intro();

	momshappinessLevel = meet_mom(momshappinessLevel);
	cout << "\nMom's happiness is now at a: " << momshappinessLevel << endl;

	momshappinessLevel = display_beginning_1(momshappinessLevel);
	cout << "\nMom's happiness is now at a: " << momshappinessLevel << endl;
	momshappinessLevel = display_beginning_2(momshappinessLevel);


	return 0;
}


int player_name()
{
	cout << "\nType your name: ";
	string userChoice;
	getline(cin, userChoice);
	return 1;
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

	cout << "\nYour mom has been gone for over 9 years now. Do you give her a hug or do you walk past her like you do not recognize her.";

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

		cout << "\nWhile you were typing, your mom walks across the street and into one of the many shops.She never saw you standing there.\n\n";
	}
	return momshappinessLevel;
}



int display_beginning_1(int momshappinessLevel)
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

int display_beginning_2(int momshappinessLevel)
{

	cout << "\n No, I  don't have a mother, you tell her. Moving your arm out of her reach.\n";
	cout << "\n I have not had a mother in Nine years. Do you know what i am you ask her.\n ";
	cout << " \n Looking down your mother answers yes in a small voice.of course I knew.\n";
	cout << " \n So you knew what i would have to go through and you still abandoned me?\n";
	cout << " \n Let me explain, your mom pleads with you.\n";
	cout << "\n Do you let her explain or do you walk away. Type walk away or let her explain:\n";
	string userChoice;

	// get the user's choice

	getline(cin, userChoice);

	// based on what the user chose, lets influence the story
	if (userChoice == "walk away" || userChoice == "Walk away.")
	{
		// if user chose 
		cout << "\nI can't do this you say choked up with emotion.\n";
		cout << "\n As you go to walk past her she slips you her phone number.\n";
		cout << "\n If you change your mind give me a call\n";
		cout << "\n You shake your head and walk away but you keep the number giving your mother hope";
		momshappinessLevel++;
	}
	else if (userChoice == "let her explain" || userChoice == "Let her explain.")
	{

		// if user choice = 

		cout << "\n You want to explain you ask staring her down. go ahead and explain.\n";
		cout << "\n.Not thinking you would actually let her get her side of the story out she begins to trip over her words\n\n";
		cout << "\n Hurry up i do not have all day you tell her. Taking a deep breath she starts over.\n";
		cout << "\n As she tells you what happened before and after she left you, you begin to understand";
		cout << "\n Everyone had lied to you, they wanted you to hate her, but why.";
		cout << "\n Not wanting to dwell on that at the moment you give your mother a hug and you thank her for telling you the truth.";
		momshappinessLevel++;

	}
	return momshappinessLevel;
}