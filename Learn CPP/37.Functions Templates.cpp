#include <iostream>
using namespace std;
     //typename (OR) class
template <class T>//New Concept & New Keywords
T maximum (T a, T b, T c) 
{
	T max;
	max = a;
	
	if(b > max) {
		max = b;
	}
	if(c > max) {
		max = c;
	}
	return max;
}
int main() 
{
	cout << "INT   : " << maximum(2,8,9) << endl;
	cout << "FLOAT : " << maximum(4.7,7.9,9.8) << endl;
	cout << "CHAR  : " << maximum('Z','T','Y');
}
