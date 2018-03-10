#include <iostream>
using namespace std;
int main(void)
{
	const int count = 3;
	const int *p = &count;
	for (int i = 0; i < count; i++)
	{
		cout << "Hello C++!" << endl;
	}
	system("pause");
	return 0;
}