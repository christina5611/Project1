#pragma once
#include <string>
using namespace std;

int display_beginning_2(int momshappinessLevel, string userName)
{

	cout << "\n No, I  don't have a mother," << userName << " tells her. Moving your arm out of her reach.\n";
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