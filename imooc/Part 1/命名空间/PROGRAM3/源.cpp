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
		cout << "myNum�����ռ��µı�����������" << endl;
	}
	else
	{
		cout << "myNum�����ռ��µı�����ż����" << endl;
	}
	system("pause");
	return 0;
}