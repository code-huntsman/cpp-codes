#include <iostream>
using namespace std;

int& somefn();

int main()
{
	
	somefn() = 15;
	cout << somefn();
}
int& somefn()//Dangling reference
{
	static int a = 10;
	return a;//Dangling References
}
