#include <iostream>
#include <string>
#include <vector> //New Header File - Vectors

//using namespace std;

using std :: vector;
using std :: cout;
using std :: endl;

int main()
{
	vector <int> v1;
	vector <int> v2 = {2,4,5,6,8};
	vector <int> v3 (v2);
	vector <int> v4 = v2;
	vector <int> v5{4,5,6,1,5};
	vector <int> v6(6);
	vector <int> v7(5,3);
	
	for(auto a1 : v2)
		cout << a1 << " ";
	cout << endl;
	for(auto a2 : v3)
		cout << a2 << " ";
	cout << endl;
	for(auto a3 : v4)
		cout << a3 << " ";
	cout << endl;
	for(auto a4 : v5)
		cout << a4 << " ";
	cout << endl;
	for(auto a6 : v7)
		cout << a6 << " ";
	return 0;
}
