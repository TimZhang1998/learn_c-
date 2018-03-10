#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int &y = x;
	cout << x << "," << y << endl;
	y = 6;
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}