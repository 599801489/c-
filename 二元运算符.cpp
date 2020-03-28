//#include<iostream>
//using namespace std;
//
//class stu {
//public:
//	int age;
//	stu(int age) {
//		this->age = age;
//	}
//};
//
//bool operator>=(stu& st1, stu& st2)
//{
//	return (st1.age >= st2.age);
//}
//int operator&(stu& st1, stu& st2)
//{
//	return (st1.age & st2.age); 
//}
//int operator&&(stu& st1, stu& st2)
//{
//	return (st1.age && st2.age);
//}
//int operator||(stu& st1, stu& st2)
//{
//	return (st1.age || st2.age);
//}
//int main()
//{
//	stu st1(12);
//	stu st2(14);
//	cout<<(st1 >= st2?true:false);
//	cout << (st1 & st2);
//	cout << (st1 && st2);
//	cout << (st1 || st2);
//	return 0;
//}