#include <iostream>
using namespace std;

class Distance {
	private:
		int feet;
		int inches;
	public:
		friend istream& operator>>(istream& input,Distance &d) {
			cout << "Enter Feet : ";
			input >> d.feet;
			cout << "Enter Inches - should be between 0 - 11 inclusive : ";
			input >> d.inches;
			if(d.inches <= 11) {
				;
			}
			else {
				cout << "Warning---" << endl;

			}
			return input;
		}
		friend ostream& operator<<(ostream& output, Distance &d) {
			
			output << d.feet << " - Feet -- " << d.inches << " - Inches" << endl;
			return output;
		}

		Distance operator+(Distance d) {
			Distance temp;

			temp.feet = this -> feet + d.feet;
		    	temp.inches = this -> inches + d.inches;
			if(temp.inches >= 12) {
				temp.feet++;
				temp.inches = temp.inches - 12;//temp.inches -= 12; <- shorthed;
			}
			return temp;	
		}
		bool operator<=(Distance d) {
			if(this -> feet < d.feet)
				return true;
			if(this-> feet == d.feet && this-> inches < d.inches)
				return true;
			if(this-> feet == d.feet && this-> inches == d.inches)
				return true;
			return false;
		}
		bool operator==(Distance d) {
			if(this-> feet == d.feet && this-> inches == d.inches)
				return true;
			return false;
		}
};

int main() {

	Distance d1,d2,d3;

	cin >> d1;//cin.operator(d1);
	cin >> d2;
	
	cout << "\nD1 : " << d1;
	cout << "\nD2 : " << d2;//cout.operator(d2);
	
	cout << "\nFeet & Inches Addition (+) : ";

	d3 = d1 + d2;// d1.operator+(d2); ---------- Addition(+) Operator Overloading ------------
	cout << d3 << endl;

	if(d1<=d2) {//d1.operator<=(d2); ----------- Less than or Equal to (<=) Operator Overloading ------------
		if(d1==d2) {//d1.operator==(d2); --------- Equal to (==) Operator Overloading -----------
			cout << "D1 and D2 Equal" << endl;
		}
		else
			cout << "D1 is Shorter." << endl;
	}
	else
		cout << "D2 is Longer." << endl;
}
