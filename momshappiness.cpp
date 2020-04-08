#include <iostream>
#include <string>
// header files
#include <moms happiness.h>
#include <display_beginning_1.h>
#include <display_beginning_2.h>
using namespace std;
// prototyping  functions
string gtusr();
int meet_mom(int momshappinessLevel, string userName);
void display_intro();
int display_beginning_1(int momshappinessLevel, string userName);
int display_beginning_2(int momshappinessLevel, string userName);

int main()
{
	display_intro();

	string userName;
	userName = gtusr();

	// if moms happiness is zero she is sad and you lose.
	// if moms happiness goes to ten she is happy and you win.
	int momshappinessLevel = 5;
	cout << "\n\nMom's happiness starts at a: " << momshappinessLevel << endl;

	

	momshappinessLevel = meet_mom(momshappinessLevel, userName);
	cout << "\nMom's happiness is now at a: " << momshappinessLevel << endl;

	momshappinessLevel = display_beginning_1(momshappinessLevel, userName);
	cout << "\nMom's happiness is now at a: " << momshappinessLevel << endl;
	momshappinessLevel = display_beginning_2(momshappinessLevel, userName);


	return 0;
}
void display_intro()
{


	cout << "\n\n\t\t***** My text adventure*****\n\n";

	cout << "\n Shaking your head you can not believe what just happened. Did you really see what you just saw? \n";
}


string gtusr()

{

	//create string to hold user name

	string userName;

	//user input of user name

	cout << "\n\n Enter player name: ";

	//get user name from system

	getline(cin, userName);

	//return name

	return userName;

}

