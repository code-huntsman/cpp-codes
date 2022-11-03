#include <iostream>
using namespace std;

//*************************Friend Function**************************//
class Count {
	friend void setx(Count &c,int x1);//New Function friend.
	private:
		int x;
	public:
		Count()
			:x(0)//Member Initializer List
			{

			}
		int getx() {
			return x;
		}
};

void setx(Count &c,int x1) {
	c.x = x1;
}

int main() {
	int temp1, temp2;
	Count c1;
	cout << "Enter Number C1 Object : ";
	cin >> temp1;
	cout << "Enter Number C2 Object : ";
	cin >> temp2;
	setx(c1,temp1);
	cout <<"C1's Friend function to change x Value - Your Entered C1's X value : " <<  c1.getx() << endl;
	Count c2;
	setx(c2,temp2);
	cout <<"C2's Friend function to change x Value - Your Entered C2's X value : " <<  c2.getx() << endl;
}

