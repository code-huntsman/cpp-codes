#include <iostream>
using namespace std;
//******************************this-> Pointer*******************************//
class Message {
	private :
		string from;
		string to;
		string body;
	public :
		void setFrom(string from) {
			this-> from = from;//New Keyword (syntax)
		}
		string getFrom() {
			return from;//this-> pointer optional
		}
};

int main() {
	Message m;
	string name;
	cout << "Enter Your Name : ";
	getline(cin,name);
	m.setFrom(name);
	cout << "Your Name : " << m.getFrom() << "\n";
}
