#include<iostream>
#include<stdlib.h>
using namespace std;
namespace myNum
{
	int x(105);
}
int main()
{
	bool isOdd(false);
	if (myNum::x%2==1)
	{
		isOdd = true;
	}
	else
	{
		isOdd = false;
	}
	if (isOdd)
	{
		cout << "myNum命名空间下的变量是奇数。" << endl;
	}
	else
	{
		cout << "myNum命名空间下的变量是偶数。" << endl;
	}
	system("pause");
	return 0;
}