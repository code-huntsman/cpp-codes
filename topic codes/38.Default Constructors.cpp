#include <iostream>
using namespace std;

class Course
{
	public:
	string courseName;
	int val;
		Course()//Default Constructor
		{
			courseName = " ";
		}
		
};

int main()
{
	Course c1;
	
	cout << "1" << c1.courseName << "2" << endl;
	cout << "Int - " << c1.val;
}
