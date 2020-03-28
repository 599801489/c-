//
//#include<iostream>
//using namespace std;
//
//template<typename T=char> //可以默认指定参数类型  传参后会覆盖这个默认的
//class father
//{
//public:
//	T a;
//	father(T t) {
//		a = t;
//	};
//	void fun();
//};
//
//void father<>::fun() //参数列表需要和类的参数列表对应上
//{
//
//}
//
//
//int main()
//{
//	father<char> fa('a'); //需要事先传递类型 和参数  模板参数列表
//	father<>* fp = new father<>('s'); //定义指针对象的时候需要加上模板参数列表
//	fp->fun();
//	fa.fun();
//	
//	return 0;
//}
//
