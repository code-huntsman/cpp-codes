#include <iostream>
#include "stack.h"
using namespace std;

	
int main() {
	
	stack s;
	
	//PUSH
	s.push(1);
	s.push(2);
	s.push(3);
	
	//POP
	cout << s.pop();
	cout << s.pop();
	
	//TOP
	cout << s.top();

	cout << "\n";
	
	return 0;
}

