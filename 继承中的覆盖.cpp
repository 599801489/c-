//#include<iostream>
//using namespace std;
//
//class cfther
//{
//private:
//	int b;
//public:
//	int a;
//	cfther()
//	{
//		a = 12;
//		b = 14;
//	}
//	friend void show();
//};
//
//void show()
//{
//	cfther ft;
//	cout << ft.b << endl;
//	
//};
//
//class son :public cfther  //不写public  默认为private
//{
//private:
//	int c;
//public :
//	int a;
//	son()
//	{
//		a = 10;
//	}
//	void fun()
//	{
//		cout << cfther::a;  //不是一种单纯的屏蔽，当需要使用父类的a时  需要加上作用域
//	}
//};
////当两个同名函数的参数不同时，形式上是重载函数，实际上不是，调用时需要加上父类的作用域
//int main()
//{
//	son s;
//	s.fun();
//	return 0;
//}