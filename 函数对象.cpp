//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//struct mypprint {
//	void operator()(int val)
//	{
//		cout << val << endl;
//	}
//public:
//	int num;
//	mypprint() { num = 0; };
//};
//
//void test01()
//{
//	mypprint print;
//	print(10);
//
//	//函数对象可以像普通函数一样调用
//	//函数对象可以像普通函数那样接收参数
//	//函数对象超出了函数的概念，函数对象可以保存函数调用的状态
//
//}
//int num = 0; //正在开发中尽量避免使用全局变量  加锁解锁
//void myprint02(int val)
//{
//	cout << val;
//	num++;
//}
//void test02()
//{
//
//
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//#if 0
//	//for_each();
//	//计算函数调用次数 
//	myprint02(10);
//	myprint02(20);
//	myprint02(30);
//	cout << num;
//#endif // 0
//	mypprint print;
//	mypprint print02 = for_each(v.begin(), v.end(), print);
//
//}
//int main()
//{
//	test02();
//}