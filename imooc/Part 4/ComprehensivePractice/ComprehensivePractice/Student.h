#include <string>
using namespace std;

class Student
{
public:
	Student();
	Student(string _name);
	Student(const Student& stu);
	~Student();
	void setName(string _name);
	string getName();
private:
	string m_strName;
}; 
