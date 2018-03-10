#include<iostream>
#include<stdlib.h>
using namespace std;
int getMaxOrMin(int *arr, int count, bool isMax)
{
	int temp = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (isMax)
		{
			if (arr[i]>temp)
			{
				temp = arr[i];
			}
		}
		else
		{
			if (arr[i] < temp)
			{
				temp = arr[i];
			}
		}
	}
		return temp;
}
int main()
{
	int arr1[4]={3,5,1,7};
	bool isMax = true;
	cout << "请输入1或0，1表示你想要寻求最大值，0表示你想要寻求最小值。" << endl;
	cin >> isMax;
	cout << getMaxOrMin(arr1, 4, isMax) << endl;
	system("pause");
	return 0;
}