#include <iostream>
using namespace std;

class complex {
	private:
		int real;
		int img;
	public:
		complex(int r, int i) {
			real = r;
			img = i;
		}
		complex(complex &c) {
			 real = c.real;
			 img = c.img;
		}
		void display(int num, string method) {
			cout << "Copy Constructor Method : " << num << method << "\t";
			cout << real << " + " << img << "i" << endl;
		}
};
int main() {
	int in,ou;
	cout << "Enter Your 1st Number : ";
	cin >> in;
	cout << "Enter Your 2nd Number : ";
	cin >> ou;

	complex c(in,ou);
	complex c1 = c;//Copy Constructor - Method 1.
	complex c2(c);//Copy Constructor - Method 2.
	//Function - input(complex c);//Copy Constructor - Method 3. and return object - Method 4.
	
	int i=1,j=2;
	string num1 = " - complex c1=c;";
	string num2 = " - complex c2(c);";
	c1.display(i,num1);//Copy Constructor	
	c2.display(j,num2);//Copy Constructor.
		

}
