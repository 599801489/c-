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
//void fun2(perper& pe)  //防止浅拷贝
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
//		d->b++; //抛出指针
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
//	catch (...) //情况没有写全，当出现异常的时候 。。。会自动接收
//	{
//		cout << "default ";
//	}
//	
//	return 0;
//}