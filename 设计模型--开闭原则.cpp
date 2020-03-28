//#include<iostream>
//using namespace std;
////抽象类
//class abstractCulator {
//public:
//	virtual int getResult() = 0;
//	virtual void setOperatorNumber(int a, int b) = 0;
//};
////加法计算器
//class PlusCaculator :public abstractCulator
//{
//	public:
//		int a;
//		int b;
//		virtual void setOperatorNumber(int a, int b)
//		{
//			a = a;
//			b = b;
//		}
//		virtual int getResult()
//		{
//			return a+b;
//		}
//};
//
////减法计算器
//class minuteCaculator :public abstractCulator
//{
//public:
//	int a;
//	int b;
//	virtual void setOperatorNumber(int a, int b)
//	{
//		a = a;
//		b = b;
//	}
//	virtual int getResult()
//	{
//		return a - b;
//	}
//};
////乘法计算器
//class MultipyCaculator :public abstractCulator
//{
//public:
//	int a;
//	int b;
//	virtual void setOperatorNumber(int a, int b)
//	{
//		a = a;
//		b = b;
//	}
//	virtual int getResult()
//	{
//		return a * b;
//	}
//};
//void test01()
//{
//	abstractCulator* caculator = new PlusCaculator;
//	caculator->setOperatorNumber(10, 20);
//	cout << caculator->getResult() << endl;
//	delete caculator;
//}
//int main(void)
//{
//	test01();
//}