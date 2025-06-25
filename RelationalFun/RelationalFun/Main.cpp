#include <iostream>
using namespace std;

/*
> greater than
>= greater or equal to
< less than
<= less than or equal to
== equal-to (equality)
!= not-equal-to

*/

int main()
{
	
	cout << boolalpha;

	int a = 15;
	int b = 20;
	bool areEqual = a == b;
	int myAge = 37; 

	cout <<"is 'a' less than 'b'? " << (a < b) << endl;
	cout << "Are 'a' and 'b' equal? " << areEqual << endl;
	cout << "Equal or over 21 years of age? " << (myAge >= 21) << endl;
	
	return 0;
}