#include <iostream>
#include <string>
#include <cctype> //New Header for (isupper & ispunct & isdigit *inbuild function)

using namespace std;

bool isStrongPassword(string);
int main()
{
	string password;
	cout << "Enter Your Password : ";
	getline(cin,password);
	
	if(isStrongPassword(password))
		cout << password << " - Strong Password" << endl;
	else
		cout << password << " - Not a Strong Password";
	return 0;
}

bool isStrongPassword(string s)
{
	bool containsUpper = false,containsSpecialChar = false,containsNumber = false;
	
	for(auto c : s)//range for loop *New Concept
	{
		if( isupper(c) )   //Find Upper case letter (like ABCD) *New Function
			containsUpper = true;
			
		if( ispunct(c) )   //Find Special Char (like !@#$%^&*) *New Function
			containsSpecialChar = true;
			
		if( isdigit(c) )   //Find Numbers (like 1234) *New Function
			containsNumber = true;
	}
	if( containsUpper && containsSpecialChar && containsNumber && s.size()>=8 )
		return true;
	
	return false;
}
		
