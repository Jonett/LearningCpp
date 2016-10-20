/*
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

* Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

* * Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

#include <iostream>
#include <string>
using namespace std;

int USER_GRADE_INPUT = 0;
string ERROR = "You have entered incorrect values! Only values in between 0 - 100!";
void CompareGrades(int grade);

int main()
{
	cout << "Please input grade : "; cin >> USER_GRADE_INPUT;
	CompareGrades(USER_GRADE_INPUT);
}

void CompareGrades(int grade)
{
	int F = 59, D = 69, C = 79, B = 89, A = 90;

	if (USER_GRADE_INPUT > 100 || USER_GRADE_INPUT < 0)
	{
		cout << ERROR << endl;
	}
	if (USER_GRADE_INPUT <= F)
	{
		cout << "Grade is = F" << endl;
	}
	if (USER_GRADE_INPUT <= D || USER_GRADE_INPUT == F + 1)
	{
		cout << "Grade is = D" << endl;
	}
	if (USER_GRADE_INPUT <= C || USER_GRADE_INPUT == D + 1)
	{
		cout << "Grade is = C" << endl;
	}
	if (USER_GRADE_INPUT <= B || USER_GRADE_INPUT == C + 1)
	{
		cout << "Grade is = B" << endl;
	}
	if (USER_GRADE_INPUT > A)
	{
		cout << "Grade is = A!" << endl;
	}
}