#include <iostream>
#define SIZE 12
using namespace std;
int main()
{
	int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int i = 0;
	int total = 0;
	for(i = 0; i<SIZE; ++i)
	{
		total+=a[i];
	}
	cout << "Total elemen yang terdapat di array : " << total << endl;
	
	return 0;
}
