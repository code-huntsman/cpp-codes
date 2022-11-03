#include <iostream>
using namespace std;

//***************************Static Members********************************//

class Room {
	private:
		static int roomsCount;
		int length;
		int breadth;
	public:
		Room(int l, int b) {
			length = l;
			breadth = b;
			roomsCount++;
		}
		int calculateArea() {
			return length * breadth;
		}
		static int getRoomsCount() {
			return roomsCount;
		}
};

int Room::roomsCount = 0;

int main() {

	Room r1(30,20);
	Room r2(18,15);
	Room r3(15,10);
	cout <<"Total Area : " << r3.calculateArea() << endl;
	cout << Room::getRoomsCount() << endl;
}
