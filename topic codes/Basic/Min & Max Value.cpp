#include <iostream>
using namespace std;

int main()
{
	int n , arr[10] , min , max ;
	
	cout << " Enter Your Number : ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	
	for(int j=0; j<n; j++)
	{
		if(arr[j] > max)
		{
			max = arr[j];
		}
		
		if(arr[j] < min)
		{
			min = arr[j];
		}
	}
	cout << "\n\tMax Value : " << max << endl;
	cout << "\tMin Value : " << min;
	
	return 0;
}

