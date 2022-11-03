#include <iostream>
using namespace std;

int product(int a, int b, int c = 1, int d = 1);

int main() {
	
	cout << product(3,4,7);
}
int product (int a, int b, int c, int d) {
	
	return a*b*c*d;
}
