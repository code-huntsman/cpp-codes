#include <iostream>
using namespace std;

class Room 
{
	//Default Private
	int length;
	int breadth;
	
	public:
	
	void setLength(int l)
	{
		length = l;
	}
	void setBreadth(int b)
	{
		breadth = b;
	}
	int getLength()
	{
		return length;
	}
	int getBreadth()
	{
		return breadth;
	}
	
	int calculateArea()
	{
		return length*breadth;
	}
};//Must last semicolon;
int main()
{
	Room r1;
	r1.setLength(15);
	r1.setBreadth(10);
	cout << "Area Is " << r1.calculateArea() << endl;
	cout << "Length of R1 Is " << r1.getLength() << "\n";
	cout << "Breadth of R1 Is " << r1.getBreadth();
	
	return 0;
}
