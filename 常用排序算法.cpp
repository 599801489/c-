//#include<iostream>
//#include<vector>
//#include<time.h>
//#include<algorithm>
//using namespace std;
//struct myprint01
//{
//	void operator()(int val)
//	{
//		cout << val<<" ";
//	}
//};
//struct myCompare01
//{
//	bool  operator()(int val1, int v2)
//	{
//		return val1 > v2;
//	}
//};
//void test01()
//{
//	vector <int> v1;
//	vector <int> v2;
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(rand() % 10);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(rand() % 10);
//	}
//	//默认从小到大
//	sort(v1.begin(), v1.end());
//	sort(v2.begin(), v2.end());
//
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size()); //开辟空间
//	//默认从小到大
//	merge(v1.begin(), v1.end(),v2.begin(),v2.end(),v3.begin(),myCompare01());
//	for_each(v3.begin(), v3.end(), myprint01());
//	
//}
//
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 9; i++)
//	{
//		v.push_back(i);
//		
//	}
//	for_each(v.begin(), v.end(), myCompare01());
//	random_shuffle(v.begin(), v.end());
//}
//
////翻转2个容器
//void test03()
//{
//	vector<int> v;
//	for (int i = 0; i < 9; i++)
//	{
//		v.push_back(i);
//
//	}
//	for_each(v.begin(), v.end(), myCompare01());
//	reverse(v.begin(), v.end()); //反转
//	for_each(v.begin(), v.end(), myCompare01());
//}
//
//void main()
//{
//	test03();
//}