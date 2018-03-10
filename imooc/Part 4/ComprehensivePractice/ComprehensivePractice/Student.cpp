#include "Student.h"

Student::Student() {}
Student::Student(string _name):m_strName(_name) {}
Student::Student(const Student& stu) {}
Student::~Student() {}
void Student::setName(string _name) 
{
	m_strName = _name;
}
string Student::getName()
{
	return m_strName;
}