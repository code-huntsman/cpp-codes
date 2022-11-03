#include <iostream>
using namespace std;

class complex {
	public:
		int real;
		int img;
	public:
		explicit complex(int r=0, int i) //Default Constructor or Initialing NULL; & //New Keyword.
		{
			real = r;
			img = i;
		}
		/*complex(const complex &c) {
			 real = c.real;
			 img = c.img;
		}*/
};
void display(complex c) {
			
	cout << c.real << " + " << c.img << "i" << endl;
}

int main() {
	complex c1;
	display(complex (10));
}
