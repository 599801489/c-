//#include<iostream>
//using namespace std;
//template<typename T=char>
//class father {
//public:
//	T a;
//	father(T t)
//	{
//		a = 12;
//	}
//	void fun();
//};
//void father<>::fun()
//{
//	cout << a;
//};
//template<typename T, typename Y>
//class son :public father<> {
//public:
//	son():father<>(12)
//	{
//		cout<< "aa";
//	}
//};
//int main()
//{
//	son<int, char> s;
//	s.fun();
//	return 0;
//}