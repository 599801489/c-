//#include<iostream>
//using namespace std;
////������
//class abstractCulator {
//public:
//	virtual int getResult() = 0;
//	virtual void setOperatorNumber(int a, int b) = 0;
//};
////�ӷ�������
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
////����������
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
////�˷�������
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