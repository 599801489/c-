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
//void test01()
//{
//	vector<int> v1;
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(rand() % 10);
//	};
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myprint01());
//	//swap
//	vector<int> v3;
//	for (int i = 0; i < 10; i++)
//	{
//		v3.push_back(rand() % 10);
//	};
//	cout << "-------交换之前------" << endl;
//	for_each(v2.begin(), v2.end(), myprint01()); cout << endl;
//	for_each(v3.begin(), v3.end(), myprint01()); cout << endl;
//	swap(v2, v3);
//	cout << "-------交换以后------" << endl;
//	for_each(v2.begin(), v2.end(), myprint01()); cout << endl;
//	for_each(v3.begin(), v3.end(), myprint01()); cout << endl;
// }
////replace_if
//struct myCompare02
//{
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test02()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(rand() % 10);
//	};
//	for_each(v1.begin(), v1.end(), myprint01()); cout << endl;
//	replace(v1.begin(), v1.end(), 8, 100); //将8替换成100  如果没有就不替换
//	for_each(v1.begin(), v1.end(), myprint01()); cout << endl;
//
//	replace_if(v1.begin(), v1.end(), myCompare02(), 200);
//
//	for_each(v1.begin(), v1.end(), myprint01()); cout << endl;
//}
//
//void main()
//{
//	test02();
//}