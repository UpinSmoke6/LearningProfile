#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "What's your full name? ";
	getline(cin, fullName);
	cout << "Where are you from? ";
	getline(cin, location);
	cout << "What was your score? ";
	cin >> initialScore;
	cout << "Hello, " << fullName << endl;
	cout << "We heard you are from " << location << endl;
	cout << "Your original score is " << initialScore << ", but with five points added, your score is: " << (initialScore + 5) << endl;

	return 0;
}