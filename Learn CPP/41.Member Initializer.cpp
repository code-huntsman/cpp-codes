#include <iostream>
using namespace std;

class Date {
	private:
		int day;
		int month;
		int year;
	public:
		Date(int d=1,int m=1, int y=2000) {
			day = d;
			month = m;
			year = y;
		}
		string getDate() {
			return to_string(day) + '/' + to_string(month) + '/' + to_string(year);//New Function: to_string-Convert to String
		}
};

class Student {
	private:
		string name;
		Date dob;
	public:
		Student (string n, int d, int m, int y)
		:name(n),dob(d,m,y)//Member Initializer List in Constructors
		{

		}

		string getdob() {
			return dob.getDate();
		}
};

int main() {

	Student s1("Ram",2,2,2002);
	cout << s1.getdob() << endl;
}
