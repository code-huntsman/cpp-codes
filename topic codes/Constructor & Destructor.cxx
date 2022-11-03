#include <iostream>
using namespace std;

class Room
{
	private:
	
	int length;
	int breadth;
	
	public:
	
	Room(int l,int b)//Constructor
	{
		length = l;
		breadth = b;
	}
	~Room()//Destructor
	{
		cout << " ~ From Destructor called";
	}
	int calculateArea()
	{
		return length * breadth;
	}
};

int main()
{
	Room r1(15,10);
	
	cout <<"Area Is " << r1.calculateArea();
	return 0;
}
