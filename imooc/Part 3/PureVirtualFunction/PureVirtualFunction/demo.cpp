#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* 定义动物类：Animal
* 虚函数：eat()
* 纯虚函数：move()
* 数据成员：m_strName
*/
class Animal
{
public:
	// 默认构造函数
	Animal()
	{
		m_strName = "动物";
	}
	// 含参构造函数
	Animal(string name) { m_strName = name; cout << "Animal" << endl; }
	// 虚析构函数
	virtual ~Animal() { cout << "~Animal" << endl; }
	// 虚成员函数
	virtual void eat() { cout << "Animal--" << m_strName << "-- eat" << endl; }
	// 纯虚函数
	virtual void move() = 0;
public:
	// 数据成员
	string m_strName;
};

/**
* 定义狗类：Dog
* 公有继承动物类
* 虚成员函数：eat()、move()
*/
class Dog : public Animal
{
public:
	// 默认构造函数
	Dog() {}
	// 含参构造函数
	Dog(string name) { m_strName = name; cout << "Dog" << endl; }
	// 虚析构函数
	virtual ~Dog() { cout << "~Dog" << endl; }
	// 虚成员函数eat()
	virtual void eat() { cout << "Dog--" << m_strName << " -- eat" << endl; }
	// 虚成员函数move()
	virtual void move() { cout << "Dog--" << m_strName << " -- move" << endl; }
public:
	// 数据成员
	string m_strname;
};

int main(void)
{
	// 通过动物类实例化狗类
	Animal *animal = new Dog("狗类");
	// 调用成员函数
	animal->eat();
	animal->move();
	// 释放内存
	delete animal;
	animal = NULL;

	system("pause");
	return 0;
}