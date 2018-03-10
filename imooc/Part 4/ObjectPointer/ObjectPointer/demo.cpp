#include <iostream>
using namespace std;
class coordinate
{

public:
	coordinate(int x, int y)
	{
		// 设置x,y的坐标
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
	// 在堆上创建对象指针
	coordinate *p = new coordinate(3, 5);
	// 打印坐标
	cout << "(" << p->getcoorx() << "," << p->getcoory() << ")" << endl;
	// 销毁对象指针
	delete p;
	p = null;
	system("pause");
	return 0;
}