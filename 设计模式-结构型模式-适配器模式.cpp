//#include<iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//struct myPrint
//{
//	void operator()(int v1,int v2)
//	{
//		cout << v1 + v2 << endl;
//	}
//};
////ת����һ����  d����Ŀ��ӿ�
//class Target {
//public:
//	virtual void operator()(int v) = 0;
//};
//
////������ģʽ ���ǽ��Ѿ�д�õĽӿ�ת����Ŀ����Ҫ�Ľӿ�
//
//
////������
//class Adaoter :public Target
//{
//public:
//	Adaoter(int pearm)
//	{
//		pearm = pearm;
//	}
//	virtual void operator()(int v)
//	{
//		print(v,pearm);
//	}
//	myPrint print;
//	int pearm;
//};
//
//
//
////myBand2nd;
//Adaoter myBand2nd(int v)
//{
//	return Adaoter(v);
//}
//
//int main(void)
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myBand2nd(10));
//cout<<"";
//
//}