#include <iostream>
using namespace std;

class complex {
	public:
		int real;
		int img;
	public:
		complex(int r=0, int i=0) //Default Constructor or Initialing NULL;
		{
			real = r;
			img = i;
		}
		complex(complex &c) {
			 real = c.real;
			 img = c.img;
		}
};
void display(complex c) {

	cout << c.real << " + " << c.img << "i" << endl;
}

int main() {
	complex c1;
	c1.display(10);
}

