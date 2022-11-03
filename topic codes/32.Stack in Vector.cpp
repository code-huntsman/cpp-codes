#include <iostream>
#include <vector>
using namespace std;

class stack {
	private :
		vector <int> v;
	public :
	
	void push (int a) {
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
};
	
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
	
	return 0;
}
