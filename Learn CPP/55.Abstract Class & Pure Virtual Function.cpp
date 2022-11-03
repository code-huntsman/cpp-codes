#include <iostream>
using namespace std;
#define n endl

class Employee {//Abstract Function. - Can't Create by Object. You can Create Pointer.
	public:
		string name;
		int employeeID;
		double salary;
		double hike;

		Employee (string n, int i, double s, double h=0) {
			name = n;
			employeeID = i;
			salary = s;
			hike = h;
		}

		virtual void update() = 0; //Pure Virtual Function.

};
class lowLevel : public Employee{
	private:
		int up;
	public:
		lowLevel(string n, int i, double s, double h) : Employee(n,i,s,h) {}

		void update() {
			cout << "Registerd Name : " << name << n;
			cout << "Registerd ID : " << employeeID << n;
			cout << "Your Salary : " << salary << n;
			cout << "Enter Your Hike in Percentage : ";
			cin >> up;
			int temp = salary*up/100;
			cout << "You are Entered Hike : " << up << '%' << " = " << temp << n;
			cout << "Your Updated - Salary : " << salary + temp << n;
		}


};
class highLevel : public Employee {
	private:
		int up;
	public:
		highLevel(string n, int i, double s, double h) : Employee(n,i,s,h) {}

		void update() {
			cout << "Registerd Name : " << name << n;
			cout << "Registerd ID : " << employeeID << n;
			cout << "Your Salary : " << salary << n;
			cout << "Enter Your Hike in Percentage : ";
			cin >> up;
			int temp = salary*up/100;
			cout << "You are Entered Hike : " << up << '%' << " = " << temp << n;
			cout << "Your Updated - Salary : " << salary + temp << n;
		}
};

int main() {
	Employee *e;
	cout << "\t\t ---- Low Level Employee Details ---- \t\t" << endl;
	lowLevel l("KanthaSamy",21,25000,12);
	e = &l;

	e->update();
	cout << n;
	cout << ":------------------------------------------------------:" << n << n;
	cout << "\t\t ---- High Level Employee Details ---- \t\t" << endl;

	highLevel h("KuppuSamy",25,35000,23);
	e = &h;

	e->update();
	cout << n;


}
