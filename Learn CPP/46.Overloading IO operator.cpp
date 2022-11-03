#include <iostream>
using namespace std;
//**************************Overloading IO operator (<< and >>)**********************************//
class Room {
	private:
		int length;
		int breadth;
	public:
		friend istream &operator>>(istream &input,Room &r);
		friend ostream &operator<<(ostream &output,Room &r);
};
istream &operator>>(istream &input,Room &r)  {
			cout << "Enter Length : ";
			input >> r.length;
			cout << "Enter Breadth : ";
			input >> r.breadth;
			return input;
}

ostream &operator<<(ostream &output,Room &r) {
		output << r.length << "X" << r.breadth;
		return output;
}


int main() {
	Room r1;

	cin >> r1;// operator>>(cin,r1);  (or) cin.operator>>(r1);
	cout << r1 << "\n";

}
