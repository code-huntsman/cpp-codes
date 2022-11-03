#include <bits/stdc++.h>
using namespace std;

//****************************** Inheritance - Employee Ex. ************************************//
class Employee {
	private:
		int empId;
		string name;
		double salary;
	public:
		Employee(int eId, string n, int s=0) {
			empId = eId;
			name = n;
			salary = s;
		}
		void print() {
			cout << "Employee ID : " << empId << endl;
			cout << "Registered Name : " << name << endl;
			cout << "Salary : " << salary << endl;
		}
		void setName(string n) {
			name = n;
		}
		string getName() {
			return name;
		}
		void setSalary(double s) {
			salary = s;
		}
		double getSalary() {
			return salary;	
		}

};
//************************* Inherit ***********************//
class ContractEmployee : public Employee {
	private:
		int workHours;//monthly
	public://Constructor takes Employee ID, Name and WorkHours.
		ContractEmployee(int eId, string n, int wH) 
		:Employee (eId,n) {
			workHours = wH;
			setSalary();
		}
		void setSalary() {
			Employee::setSalary(workHours * 100);
		}
		void print() {
			Employee::print();
			cout << "Work Hours : " << workHours << endl;
		}

};
int main() {

	cout << "\n:--------------- Employee ---------------: \n" << endl;
	Employee e(2,"PonnuSamy",25000);
	e.print(); 
	e.setSalary(26000);

	cout << "\n:--------------- Updated ---------------: \n" << endl;
	e.print();
	cout << e.getName();
	cout << "\n";
	
	cout << "\n:--------------- Contract ---------------: \n" << endl;
   	ContractEmployee c(21,"Riya",150);
	c.print();
	cout << "\n";
		
}
