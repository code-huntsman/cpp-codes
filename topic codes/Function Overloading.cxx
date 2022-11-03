#include <iostream>
using namespace std;

int absl(int);
double absl(double);
long absl(long);

int main()
{
	int a=-5;
	cout << absl(a) << endl;
	double d=-9.0;
	cout << absl(d) << "\n";
	long l=-8L;
	cout << absl(l);
	
	return 0;
}

int absl (int a)
{
	cout << "From int Function ";
	return a<0?-a:a;
}
double absl (double a)
{
	cout << "From double Function ";
	return a<0?-a:a;
}
long absl (long a)
{
	cout << "From long Function ";
	return a<0?-a:a;
}
