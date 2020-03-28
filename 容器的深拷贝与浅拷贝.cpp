//#include<iostream>
//#include<vector>
//using namespace std;
//
//class person {
//public:
//	char* name;
//	int age;
//	person(char* name, int age) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		age = age;
//	}
//	person(const person& p)
//	{
//		this->name= new char[strlen(p.name) + 1];
//		strcpy(this->name, p.name);
//		age = age;
//	}
//
//	person& operator=(const person& p)
//	{
//		if (p.name != NULL) {
//			delete[] this->name;
//		}
//		this->name = new char[strlen(p.name) + 1];
//		strcpy(this->name, p.name);
//		age = age;
//		return *this;
//	}
//
//	~person()
//	{
//		if (this->name != NULL)
//		{
//			delete[] this->name;
//		}
//	}
//};
//
//void test01()
//{
//	person p('a', 20);
//	vector<person> vperson;
//	vperson.push_back(p);
//}