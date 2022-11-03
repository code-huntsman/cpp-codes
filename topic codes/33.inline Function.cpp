#include <iostream>
using namespace std;

int square (int);

int main() {
	
	cout << square(10);
	
	return 0;
}
inline int square (int a) {
	
	return a*a;
}
