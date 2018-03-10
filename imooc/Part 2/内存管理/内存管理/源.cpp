#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	char *str = new char[100];
	if (NULL == str)
	{
		system("pause");
		return 0;
	}
	strcpy(str, "Hello C++!");
	cout << str << endl;
	delete []str;
	str = NULL;
	system("pause");
	return 0;
}