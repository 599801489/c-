//#include <iostream>
//using namespace std;
//
//class stu
//{
//public:
//	int a;
//	int b;
//	stu()
//	{
//		a = 1;
//		b = 2;
//	}
//	int operator++()
//	{
//		a += 1;
//		return (a);
//	}
//	int operator--()
//	{
//		a -= 1;
//		return (a);
//	}
//};
////int operator++(stu& st)
////{
////	st.a += 1;
////	return (st.a);
////}
//
//int operator++(stu& st,int n) //将 int n理解为一个标记
//{
//	int a = st.a;
//	st.a += 1;
//	return a;
//}
//int main()
//{
//	int a = 12;
//	a++;
//	++a;
//	stu st;
//	cout << ++st<<endl;
//	cout << st++;
//	cout << st.a;
//
//
//	return 0;
//}