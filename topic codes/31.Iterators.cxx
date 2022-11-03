#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> v = {4,5,6,7,8,9};
	
	auto b = v.begin();//New Funtion
	
	while(b != v.end())//New Function
	{
		cout << *b << " ";
		b++;
	}
	return 0;
}
