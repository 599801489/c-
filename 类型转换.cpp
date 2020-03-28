//#include<iostream>
//using namespace std;
//
//class father
//{
//public:
//	int a;
//
//	virtual void fun() //多态得放一个虚函数  子类重写这个虚函数
//	{
//
//	}
//
//};
//class son : public father
//{
//public:
//	int b;
//	int c;
//	void fun()
//	{
//
//	}
//};
//
//class outhe
//{
//public:
//	int c;
//};
//int main()
//{
//
//	father* p;
//	son* s;
//	outhe *o;
//
//	p = dynamic_cast<father*> (s);
//	s = dynamic_cast<son*>(p);
//	o = dynamic_cast<outhe*>(s);
//	/*const father* fa;
//	son* s;
//	father* fa1 = const_cast<father*> (fa);*/
//	//o = (outhe*)s;
//	//p = static_cast<father*>(s);
//
//	return 0;
//}