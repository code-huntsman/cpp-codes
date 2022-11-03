#include <vector>
//stack to push,pop or find top Used with Integers only.

class stack {
	private :
		std::vector <int> v;
	public :
	
	void push (int a);//push value into the stack.

	int top();//returns top element in the stack.

	int pop();//pops and returns the top element in the stack.
	
};

