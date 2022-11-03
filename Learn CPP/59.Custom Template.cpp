#include <iostream>
#include <vector>
using namespace std;

//************************************* Custom Template **********************************//

template <typename T>
class stack {
	private :
		vector <T> v;
	public :
	
	void push (T a) {
		v.push_back(a);
	}
	
	T top() {
		return v[v.size()-1];
	}
	T pop() 
	{
		T t = top();
		
		if(v.size() !=  0) {
			v.pop_back();
		}
		return t;
	}
};
	
int main() {
	
	stack<string> s;
	cout << "\n----- Before -----" << endl;
	cout << "Riya" << endl;
	cout << "Lisa" << endl;
	cout << "Rose" << endl;
	
	//PUSH
	s.push("Riya");
	s.push("Lisa");
	s.push("Rose");
	
	cout << "\n----- After -----" << endl;
	//POP
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	//TOP
	cout << s.top() << endl;
	
	return 0;
}
