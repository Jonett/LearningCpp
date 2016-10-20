/*
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
arrays

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

* Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

* * * * Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes
*/


#include <iostream>

using namespace std;


const int PEOPLE = 10;


int main()
{
	int NR_OF_PEOPLE[PEOPLE] = {};
	int NUMBER_OF_PANCAKES = 0;


	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "How many pancakes person nr" << i + 1 << " eat?  "; cin >> NUMBER_OF_PANCAKES;
		NR_OF_PEOPLE[i] = NUMBER_OF_PANCAKES;
	}

	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "The person nr" << i + 1 << " ate :  " << NR_OF_PEOPLE[i] << " pancakes!" << endl;
	}



	return 0;
}