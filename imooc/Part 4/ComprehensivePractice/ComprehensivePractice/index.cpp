#include <iostream>
#include <string>
#include <stdlib.h>
#include "Student.h"
using namespace std;
/**
* �����ࣺStudent
* ���ݳ�Ա��m_strName
* �޲ι��캯����Student()
* �вι��캯����Student(string _name)
* �������캯����Student(const Student& stu)
* ����������~Student()
* ���ݳ�Ա������setName(string _name)��getName()
*/

int main(void)
{
	// ͨ��new��ʽʵ��������*stu
	Student *stu = new Student();
	// ���Ķ�������ݳ�ԱΪ��Ľ������
	stu->setName("Ľ����");
	// ��ӡ��������ݳ�Ա
	cout << stu->getName() << endl;
	delete stu;
	stu = NULL;
	system("pause");
	return 0;
}