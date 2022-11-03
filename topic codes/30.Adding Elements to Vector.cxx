#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> groceryList;
	string item;
	
	cout << "Enter Items to be added to List : \n";
	
	while (cin >> item)
	{
		groceryList.push_back(item);
	}
	cout << "\nYour List contains following Items : \n" << endl;
	
	for(auto i : groceryList)
		cout << i << "\n";
	return 0;
}
