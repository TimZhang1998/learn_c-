#include <iostream>
using namespace std;
class coordinate
{

public:
	coordinate(int x, int y)
	{
		// ����x,y������
		m_ix = x;
		m_iy = y;
	}
	~coordinate()
	{

	}
	void setcoorx(int _ix)
	{
		m_ix = _ix;
	}
	void setcoory(int _iy)
	{
		m_iy = _iy;
	}
	int getcoorx()
	{
		return m_ix;
	}
	int getcoory()
	{
		return m_iy;
	}
private:
	int m_ix;
	int m_iy;
};

int main(void)
{
	// �ڶ��ϴ�������ָ��
	coordinate *p = new coordinate(3, 5);
	// ��ӡ����
	cout << "(" << p->getcoorx() << "," << p->getcoory() << ")" << endl;
	// ���ٶ���ָ��
	delete p;
	p = null;
	system("pause");
	return 0;
}