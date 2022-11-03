#include <iostream>
using namespace std;
//********************************* Protected Access Specifier ********************************//
class No {
	private:
		string name;
	protected:// Protected Access Specifier
		int age;
	public:
		int temp;
		No(string n, int a) {
			name = n;
			age = a;
		}
};

class Yes : public No {
	private:
		int limit = age; // Base's Protected Members, You can use Derrived class directly.
					  // But You can't use directly in main() function or any other functions.
	public:
		Yes(string na, int ag)
		:No(na,ag) {
			cout << " YES " << endl;
			cout << " " << limit << endl;
			cout << " " << age;
		}

};
int main() {

	Yes yes("PonnuSamy",33);
	cout << "\n";
					//You can't use protected function directly in this main function.
	/*yes.age = 55; ------ But You can use Base or Derived function way.
	cout << yes.age;*/
	No no("Riya",44);
	cout << "\n";

}
