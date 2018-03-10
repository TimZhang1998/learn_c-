#include <iostream>
using namespace std;
int getmax(int a, int b)
{
	return a > b ? a : b;
}
int getmax(int *arr, int count)
{
	int temp = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (temp < arr[i])
		{
			temp = arr[i];
		}
	}
	return temp;
}
int main(void)
{
	int numarr[3] = {3, 8, 6};
	cout << getmax(numarr[1], numarr[2]) << endl;
	cout << getmax(numarr, 3) << endl;
	system("pause");
	return 0;
}