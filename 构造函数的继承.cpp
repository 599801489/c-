//#include<iostream>
//using namespace std;
//class peoper {
//		
//
//protected: //用protected修饰的成员只是父类和子类可以用  类外不允许使用
//	
//public:
//	peoper()
//	{
//		cout << "peoper";
//	}
//};
//class cxiaoming :protected peoper
//{
//public :
//	int a;
//	cxiaoming()
//	{
//		cout << "cxiaoming"; 
//	}
//};
//int main()
//{
//	cxiaoming cx;  //继承构造调用顺序，先调用父类再调用子类
//	return 0;
//}