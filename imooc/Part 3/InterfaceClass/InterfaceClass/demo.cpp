#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* ��������ࣺCanShut
* ���崿�麯����aim��reload
*/
class CanShut
{
public:
	virtual void aim() = 0;
	virtual void reload() = 0;
};

/**
* ����ǹ�ࣺGun
* ���м̳������
* ʵ�ֳ�Ա������aim��reload
*/
class Gun : public CanShut
{
public:
	virtual void aim()
	{
		cout << "Gun -- aim" << endl;
	}
	virtual void reload()
	{
		cout << "Gun -- reload" << endl;
	}
};

/**
* ���庬�κ��������hunting
* ���ò�����aim��reload����
*/
void hunting(Gun *s)
{
	s->aim();
	s->reload();
}

int main(void)
{
	// ʵ����ǹ����
	Gun *gun = new Gun();
	// ���ú��κ���hunting,������ǹ���뺯����
	hunting(gun);
	// �ͷ��ڴ�
	delete gun;
	gun = NULL;

	system("pause");
	return 0;
}