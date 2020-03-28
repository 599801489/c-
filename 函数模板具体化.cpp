//#include<iostream>
//using namespace std;
//
//struct Mtruct
//{
//	int a;
//	double b;
//
//};
//
//template<class T>//T 为通用类型 可以有多个参数 作用域仅对fun有效  
//void fun(T a) //当遇到特殊类型 如结构体 则可以用单独处理的方式
//{
//	cout << a << endl;
//}
//
//template<> void fun<Mtruct>(Mtruct& no) //如有特殊参数传进来  执行这个具体化  原来的那个就不执行  普通类型的就不执行具体化
//{
//	cout << no.a;
//}
//int main()
//{
//	Mtruct mt = {12,12.2};//结构体初始化
//	fun(mt);
//	fun("anan");
//	return 0;
//}