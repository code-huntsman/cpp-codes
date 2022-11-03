#include <iostream>
using namespace std;
//****************************** Standard Exception ******************************//

int main() {

	try {
		int *array = new int[1000000000000000];
	}
	catch (exception &e) {
		cerr << "Standard Exception " << e.what() << endl; //Error Specifie Display - You are use cerr.
		                                //what() function display the error.
	}
	cout << "End OF Program " << endl;
}
