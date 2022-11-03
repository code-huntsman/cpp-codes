#include <iostream>
#include <string>//New Header File Using for String (Actually string is Class)
using namespace std;

int main()
{
	string s1 = "C++";
	string s2 ("Hello World");
	string s3 = s1;//Copy Initialization
	string s4 (s2);//Direct Initialization
	string s5 (6,'P');
	string s6;//User Input Initialization
	
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	
	cout << "Your Entered - ";
	getline (cin,s6);//"getline" New Function 
	cout << s6;
	return 0;
}

