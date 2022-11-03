#include <iostream>
using namespace std;

class Room
{
	public:
		int length;
		int breadth;
		
		int calculateArea()
		{
			return length*breadth;
		}
};

int main()
{
	Room r1;
	cin >> r1.length;
	cin >> r1.breadth;
	
	cout << "Area Is " << r1.calculateArea();
	
	Room r2;
	cin >> r2.length;
	cin >> r2.breadth;
	
	cout << "Area Is " << r2.calculateArea();
	return 0;
}
