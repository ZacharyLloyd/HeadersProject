#include <iostream>
#include <string>
#include "Welcome.h"
using namespace std;

//Function for welcome screen to the program
void Welcome(string CharacterName)
{
	cout << "\nWelcome " << CharacterName << " to Zombieland.\n";
	cout << "Be careful of the undead, or you may become one!" << endl;
}