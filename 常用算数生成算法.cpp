//#include<iostream>
//#include<vector>
//#include<time.h>
//#include<algorithm>
//#include<numeric>
//using namespace std;
//struct myprint01
//	{
//	void operator()(int val)
//	{
//		cout << val<<" ";
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(7);
//	v.push_back(2);
//	v.push_back(9);
//	int ret=accumulate(v.begin(), v.end(), 0); //���+���һ������
//	cout << ret;
//
//	//fill
//	vector<int> v2;
//	v2.resize(10);
//	fill(v2.begin(), v2.end(), 10); //f�ſռ��С��  10
//	for_each(v2.begin(), v2.end(), myprint01()); cout << endl;
//}
//
//
//void test02()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> v3;
//	v3.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());  //��v2��v1�Ľ�������v3����
//	cout << *it; //0
//	
//	for_each(v3.begin(), it, myprint01()); cout << endl;
//
//
//	//�󲢼�
//	vector<int> v4;
//	v4.resize(v1.size() + v2.size());
//	it=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
//	for_each(v4.begin(), it, myprint01()); cout << endl;
//
//	//�
//	vector<int> v5;
//	v5.resize(v1.size());
//	it=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
//		for_each(v5.begin(), it, myprint01()); cout << endl;
//	
//}
//int main()
//{
//	test02();
//}