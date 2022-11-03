#include <iostream>
#include <fstream>
using namespace std;
//********************************** Files *************************************//
int main() {

	fstream file;
	file.open("myfile",ios::out);
	cout << "Writing Console" << endl;
	file << "I am a 7 star competitive programmer :) = Hari Prasanth";
	file.close();

	string s;
	file.open("myfile",ios::in);
	while(file>>s) {
		cout << s << " ";
	}
	cout << endl;
}
