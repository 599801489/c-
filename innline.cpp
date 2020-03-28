//#include <iostream>
//using namespace std;
//
//#define SUM(x) x*x //宏
//class Stu {
//public :
//	void fun() //默认内联函数  隐式定义 加linline是现是
//	{
//
//	}
//};
//inline void Stu::fun() //类外 不加inline不是内联函数
//{
//
//}
//inline void fun(int i);
//int main()
//{
//	/*for (int i = 0; i < 10; i++)
//	{
//		fun(i);
//	}
//*/
//	cout << (SUM(2 + 3));
//	fun(2 + 3);
//	return 0;
//}
//inline void fun(int i) //内联函数
//{
//	cout << (i * i);
//}