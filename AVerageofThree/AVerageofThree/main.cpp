#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double average;

	cout << "Enter a whole number: " << endl;
	cin >> num1;

	cout << "Enter a second whole number: " << endl;
	cin >> num2;

	cout << "Enter third whole number: " << endl;
	cin >> num3;

	average = (num1 + num2 + num3) / 3;

	cout << "Average: " << average << endl;

	return 0;
}