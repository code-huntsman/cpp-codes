#include "stack.h"

void stack::push (int a) {
		v.push_back(a);
	}
	
	int top() {
		return v[v.size()-1];
	}
	int pop() 
	{
		int t = top();
		
		if(v.size() !=  0) {
			v.pop_back();
		}
		return t;
	}

