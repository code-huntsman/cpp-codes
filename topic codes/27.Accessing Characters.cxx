#include <iostream>
using namespace std;

//::::::: 1 :::::::   Output - h e l l o

/*int main()
{
	string s = "hello";
	
	for(auto c : s)
	{
		cout << c << " ";
	}
	return 0;
}*/

//:::::: 2 ::::::   Output - Hello

/*int main()
{
	string s = "hello";
	
	s[0] = toupper(s[0]); //New function
	cout << s;
	return 0;
}*/

//:::::: 3 ::::::   Output - String is Empty

int main()
{
	string s = "";
	if(s.empty()) //New function
		cout << "String is Empty";
	else
		cout << "String is not Empty";
	return 0;
}
	
