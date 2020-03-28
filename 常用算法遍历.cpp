//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////transform 算法 将指定容器区间元素搬运到另一容器中
////注意：transform 不会给目标容器分配内存，所以需要我们提前分配内存
//
//struct myplus
//{
//	int operator()(int val)
//	{
//		return val+100;
//	}
//};
//void myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int> v1;
//	vector<int> v2;
//	v2.resize(100);
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v2.resize(40);
//	transform(v1.begin(), v1.end(),v2.begin(), myplus());
//	for_each(v2.begin(), v2.end(), myprint);
//}
////常用的查找算法
//void tst02()
//{
//	vector<int> v1;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it=find(v1.begin(), v1.end(), 5);
//	if (it != v1.end())
//	{
//		cout << "找到了" << (*it);
//	}
//	else
//	{
//		cout << "没";
//	}
//}
//class person {
//public :
//	int id;
//	int age;
//	person(int id, int age) :id(id), age(age) {};
//	bool operator==(const person& p) const //需要传入const person& p
//	{
//		return p.id == this->id && p.age == this->age;
//
//	}
//	
//};
//
//void test03()
//{
//	vector<person> v;
//	person p1(10, 20), p2(20, 30);
//	v.push_back(p1);
//	v.push_back(p2);
//
//	vector<person>::iterator it = find(v.begin(), v.end(), p1);
//	if (it != v.end())
//	{
//		cout << "找到了";
//	}
//	else
//	{
//		cout << "没";
//	}
//}
//bool mysearch(int val)
//{
//	return val > 5;
//}
//bool mysearch2(int val)
//{
//	return val > 5;
//}
//
////binary_search 二分查找法
//void test04()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v1.push_back(9);
//	bool ret=binary_search(v1.begin(), v1.end(), 5);
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	//adjacent_find 算法 查找相邻的重复元素
//	vector<int>::iterator it =adjacent_find(v1.begin(), v1.end());
//	if (it!=v1.end())
//	{
//		cout << "找到了" <<*it<< endl;
//	}
//	else
//	{
//		cout << "没" << endl;
//	}
//
//
//	//find_if 会根据我么的条件（函数） 返回第一个满足条件的元素的迭代器
//	vector<int>::iterator it2 = find_if(v1.begin(), v1.end(), mysearch);
//	if (it2 != v1.end())
//	{
//		cout << "找到了" << *it2 << endl;
//	}
//	else
//	{
//		cout << "没" << endl;
//	}
//
//	//count   返回要查找的元素出现的次数 count_if 返回统计大于查询元素的元素个数
//	int num=count(v1.begin(), v1.end(), 9);
//	cout << num;
//	num = count_if(v1.begin(), v1.end(), mysearch2);
//}
//
//
//
//int main()
//{
//	test04();
//}