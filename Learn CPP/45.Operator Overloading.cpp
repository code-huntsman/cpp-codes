#include <iostream>
using namespace std;
//****************************Operator Overloading*******************************//
class Time {
	private:
		int hours;
		int minutes;
	public:
		Time(int h, int m) {
			hours = h;
			minutes = m;
		}
		void operator++() {//New Keyword
			minutes++;
			if(minutes >= 60) {
				hours++;
				minutes -= 60;//minutes = minutes - 60;
			}
		}
		void operator++(int) {//New Keyword
			minutes++;
			if(minutes >= 60) {
				hours++;
				minutes -= 60;//minutes = minutes - 60;
			}
		}
		void displayMinute() {
			cout << hours << " : " << minutes;
		}

};

int main() {
	Time t1(6,30);
	++t1;//unary operator - pre increment
	t1++;// t1.operator(0) <- passing 0 just inform for post incre.t1++.//unary operator - post increment
	t1.displayMinute();
}
