#include <iostream>
using namespace std;
 //***************************************** Exception Handling *************************************//
int main() {

	int i,j;

	cout << "Enter Your No 1 : ";
	cin >> i;
	cout << "Enter Your No 2 : ";
	cin >> j;

	try{// You can create Nested try block.
		if(j==0)
			throw 5; //Default catch block You will put dircetly without argument (throw ;)
			throw 5.0;

	cout << i / j << endl;
	}
	catch(const char *c) {
		cout << "Error Occurred.." << c << endl;
	}
	catch(int i) {
		cout << "Math Error Occurred.. " << i << endl;
	}
	catch (...) // Default Catch Match (...)
	{
		cout << "Your Float Value";
	}
	cout << " \t \t Exit" << endl;

}
