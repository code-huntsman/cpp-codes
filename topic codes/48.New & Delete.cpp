#include <iostream>
using namespace std;

//***************************************** New & Delete *****************************************//
//Please do not compile this file. coz showing error.

class Room {
	private:
		int length;
		int breadth;
};
int main() {
	Room *p2 = new Room[10];

	int *p = NULL;
	p = new int(10);//New Keyword.
	delete p;//New Keyword.
	cout << *p << endl;

	int *p1 = NULL;
	p1 = new int[20];//Memory Leak.
	delete[] p1;
	cout << *p1 << endl;
	
	delete[] p2;
}
