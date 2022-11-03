#include <iostream>
using namespace std;

//Const Objects and const member functions

class Book {
	private:
		string bookName;
		string authorName;
	public:
		Book(string bn, string an) {
			bookName = bn;
			authorName = an;
		}
		string  getBookName()const {
			return bookName;
		}
		string getAuthorName()const {
			return authorName;
		}
};

int main() {

	const Book b1("Cracking the Coding Interviews", "Gayle Laakmann McDowell");
	cout << "Book Name : " << b1.getBookName() << endl;
	cout << "Author Name : " << b1.getAuthorName() << endl;

	//Use Const to Secure your Date :can't change Value //so pass by value is secure.

	return 0;
}
