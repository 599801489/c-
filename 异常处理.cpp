//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//class perper
//{
//public:
//	int b;
//	perper()
//	{
//		b = 12;
//	}
//};
//void fun(int a)
//{
//	if (a == 0)
//	{
//		abort();
//	}
//	else {
//		cout << a;
//	}
//};
//void fun1(int a)
//{
//	while (a<10)
//	{
//		if (a == 5)
//		{
//			throw 201.12;
//		}
//		a++;
//	}
//}
//void fun2(perper& pe)  //��ֹǳ����
//{
//	while (pe.b<30)
//	{
//		if (15==pe.b)
//		{
//			throw pe;
//		}
//	}
//	pe.b++;
//}
//
//int main()
//{
//
//	perper pe;
//
//
//	try
//	{
//		fun2(pe);
//	}
//	catch (perper& a)
//	{
//
//	}
//	catch (perper* d)
//	{
//		d->b++; //�׳�ָ��
//	}
//
//
//	try
//	{
//		fun1(3);
//	}
//	catch (int b)
//	{
//		try
//		{
//			fun1(b+1);
//		}
//		catch (int a)
//		{
//			cout << a;
//		}
//	}
//	catch (...) //���û��дȫ���������쳣��ʱ�� ���������Զ�����
//	{
//		cout << "default ";
//	}
//	
//	return 0;
//}