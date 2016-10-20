/*

http://www.cplusplus.com/forum/articles/12974/
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)

Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.

* Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.

* * Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number.
(i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc.
The program must behave accordingly exiting when the user enters the number they were asked not to.)

*/


#include <iostream>
using namespace std;


int main()
{

	int INTERATION = 0;
	int USER_INPUT = 0;
	cout << "please input any other number than 0 : "; cin >> USER_INPUT;

	do
	{

		cout << "Please enter any other number than " << INTERATION + 1 << " : "; cin >> USER_INPUT;
		INTERATION++;
	} while (INTERATION != USER_INPUT);

	cout << "You have entered the same number as you have given tries! Good job!..." << endl;

	return 0;
}



/*

#include <iostream>
#include <string>
using namespace std;
int USER_INPUT = 0;
int INTERATION = 10;

int main()
{

do
{
cout << "please input a number, number can be any number but 5 : "; cin >> USER_INPUT;
if (USER_INPUT == 5)
{
cout << "HEY! you weren't supposed to enter 5! :(" << endl;
return 0;
}
} while (INTERATION > USER_INPUT);


//while (USER_INPUT != 5)
//{
//
//	for (int i = 0; interation > i; i++)
//	{
//		cout << "please input a number, number can be any number but 5 : "; cin >> USER_INPUT;
//
//	}
//	cout << "for loop exit" << endl;
//}


cout << "Wow, you're more patient then I am, you win." << endl;

return 0;

}

*/