/*

http://www.cplusplus.com/forum/articles/12974/
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

* If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

* * Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."

*/



// Done with Switch && check for user input.
#include <iostream>
#include <string>
using namespace std;

int USER_DRINK_SELECTION = 0;
string ERROR = "Error. choice was not valid, here is your money back.";
void DrinkSelection(int selection);

int main()
{
	while (USER_DRINK_SELECTION == 0)
	{
		cout << "please select your drink:" << endl;
		cout << "1 - Coke" << endl;
		cout << "2 - Water" << endl;
		cout << "3 - Sprite" << endl;
		cout << "4 - Fanta" << endl;
		cout << "5 - Ice Coffee" << endl;
		cout << "Use numbers 1 - 5 to do your selection" << endl;
		cout << endl;
		cout << "Your selection Please : "; cin >> USER_DRINK_SELECTION;
		cout << endl;

	}

	DrinkSelection(USER_DRINK_SELECTION);

	return 0;

}

void DrinkSelection(int selection)
{
	selection = USER_DRINK_SELECTION;
	switch (USER_DRINK_SELECTION)
	{
	default: cout << "Error. choice was not valid, here is your money back." << endl; break;
	case 1: cout << "One coke bottle for you!" << endl; break;
	case 2: cout << "One bottle of fresh spring water for you!" << endl; break;
	case 3: cout << "One bottle of ice cold Sprite for you my friend!" << endl; break;
	case 4: cout << "Fanta free, stay bambhoocha!" << endl; break;
	case 5: cout << "One cold coffee for you... who drinks coffee cold anyways?..." << endl; break;
	}
}







// Done with IF loop

/*

#include <iostream>
using namespace std;

int USER_DRINK_SELECTION = 0;

void DrinkSelection(int selection);

int main()
{
while (USER_DRINK_SELECTION == 0 || USER_DRINK_SELECTION > 5)
{
cout << "please select your drink:"  << endl;
cout << "1 - Coke" << endl;
cout << "2 - Water" << endl;
cout << "3 - Sprite" << endl;
cout << "4 - Fanta" << endl;
cout << "5 - Ice Coffee" << endl;
cout << "Use numbers 1 - 5 to do your selection" << endl;
cout << endl;
cout << "Your selection Please : "; cin >> USER_DRINK_SELECTION;
cout << endl;

}

DrinkSelection(USER_DRINK_SELECTION);

return 0;
}

void DrinkSelection(int selection)
{
int Coke = 1, Water = 2, Sprite = 3, Fanta = 4, IceCoffee = 5;
if (selection == 1)
{
cout << "One coke bottle for you!" << endl;
}
else if (selection == 2)
{
cout << "One bottle of fresh spring water for you!" << endl;
}
else if (selection == 3)
{
cout << "One bottle of ice cold Sprite for you my friend!" << endl;
}
else if (selection == 4)
{
cout << "Fanta free, stay bambhoocha!" << endl;
}
else
{
cout << "One cold coffee for you... who drinks coffee cold anyways?..." << endl;
}
}

*/