//#include<iostream>
//using namespace std;
//
//
//当有一个祖父类 
//class gFarther
//{
//public:
//	gFarther(int a, int b)
//	{
//
//	}
//	gFarther(int c)
//	{
//
//	}
//};
//class farther :public gFarther
//{
//public :
//	farther(int a) :gFarther(1, 2)
//	{
//		cout << "a";
//	}
//};
//class son :public farther
//{
//public :
//	int b; 
//	son():farther(2)//如果父类构造函数有参数 那么子类需要在初始化列表中  调用父类的构造函数 并传参  son类不允许直接调用GF类
//	{
//
//	}
//
//};
//int main()
//{
//	son s;
//
//	return 0;
//}