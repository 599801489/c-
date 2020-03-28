//#include<iostream>
//using namespace std;
//
//
////当有一个祖父类 
//class gFarther
//{
//public:
//	~gFarther()
//	{
//		cout << "gFarther" << endl;
//	}
//	
//};
//class farther :public gFarther
//{
//public:
//	~farther()
//	{
//		cout << "farther" << endl;
//
//	}
//};
//class son :public farther
//{
//public:
//	~son()
//	{
//		cout << "son" << endl;
//
//	}
//};
//int main()
//{
//	{
//		son s;//创建局部对象  //析构函数作用：释放对象空间
//		//析构函数和构造函数的调用顺序是相反的  构造函数是由辈分高的向辈分低的调用
//	}
//
//	return 0;
//}