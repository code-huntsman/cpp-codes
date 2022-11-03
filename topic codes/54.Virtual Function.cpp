#include <iostream>
using namespace std;

class Shape {
	public:
		double base, height;

		 Shape(double b, double h) {
			base = b;
			height = h;
		}
		virtual double area() {
			return 0;
		}
};

class Triangle : public Shape {
	public:
		Triangle(double a, double b) : Shape(a,b) {}
	double area() {
		cout << "Triangle Class Area Function ";
		return base*height/2;
	}
};
class Rectangle : public Shape {
	public:
		Rectangle(double a, double b) : Shape(a,b) {}
	double area() {
		cout << "Rectangle Class Area Function ";
		return base * height;
	}
};
int main() {
	Shape *s;

	Triangle t(10.0,20.0);
//	cout << t.area() << endl; //Static Binding (or) Early Binding.

	s = &t;
	cout << s->area() << endl; // Dynamic Binding (or) Late Binding.

	Rectangle r(10.0,20.0);
//	cout << r.area() << endl; //Static Binding (or) Early Binding.

	s = &r;
	cout << s->area() << endl;// Dynamic Binding (or) Late Binding.

}
