//#include <iostream>
//using namespace std;//命名空间的位置决定了命名空间的作用域 
////当命名空间写在类或者方法里面时，在这个类外或者方法外需要使用的话可以用 std::cout<<"a";
//
//class Stu {
//public:
//	int age;
//	double dScore;
//	Stu()
//	{
//		age = 12;
//		dScore = 12.12;
//	}
//};
//
////运算符重载语法
//void operator+(Stu& st, int a) {
//	cout << (st.age) + a << endl;
//}
//
//int main()
//{
//	//加法 +
//	
//	Stu st1;
//	Stu st2;
//	st1 + 12;
//	
//	return 0;
//}