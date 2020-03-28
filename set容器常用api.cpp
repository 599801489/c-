//#include <iostream>
//#include<set>
//using namespace std;
//void printSet(set<int>& s)
//{
//	for (set<int> ::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
////set容器初始化
//void test1()
//{
//	set<int> s1; //自动排序  默认从小到大
//	s1.insert(7);
//	s1.insert(2);
//	s1.insert(9);
//	s1.insert(4);
//	printSet(s1);
//
//	//如何改变默认排序
//
//}
////赋值操作  删除
//void test02()
//{
//	set<int> s1;
//	s1.insert(7);
//	s1.insert(2);
//	s1.insert(9);
//	s1.insert(4);
//	s1.insert(4);
//	set<int> s2=s1;
//	s2.swap(s1);
//	//删除
//	s1.erase(s1.begin());
//	s1.erase(4); //删除set里面4
//	printSet(s1);
//}
//
////set查找
//void test03()
//{
//	set<int> s1;
//	s1.insert(7);
//	s1.insert(2);
//	s1.insert(9);
//	s1.insert(4);
//	s1.insert(4);
//	set<int>::iterator it=s1.find(24);//这里的为key-value为同一个值； 返回迭代器
//	if (it == s1.end())
//	{
//		cout << "找不到";
//	}
//	else
//	{
//		cout << *it;
//	}
//
//	//找到第一个大于等于key的元素
//	set<int>::iterator rel=s1.lower_bound(2);  //去查找值为2   如果没有找到2  那么就返回>=2的
//	if (rel == s1.end())
//	{
//		cout << "找不到";
//	}
//	else
//	{
//		cout << *rel;
//	}
//	cout << endl;
//	//找第一个大于key的值
//	set<int>::iterator rel2=s1.upper_bound(2);
//	if (rel2 == s1.end())
//	{
//		cout << "找不到";
//	}
//	else
//	{
//		cout << *rel2;
//	}
//
//	//equal_range 返回Lower_bound和upper_bound值
//	pair<set<int>::iterator, set<int>::iterator> myret=s1.equal_range(2);
//	myret.first;//表示第一个迭代器
//	myret.second;//表示第二个迭代器
//
//	if (myret.first == s1.end())
//	{
//		cout << "没找到";
//	}
//	else
//	{
//		cout << "myret.first为：" << *(myret.first) << endl;
//	}
//
//	if (myret.second == s1.end())
//	{
//		cout << "没找到";
//	}
//	else
//	{
//		cout << "myret.second为：" << *(myret.second) << endl;
//	}
//
//}
//
//int main()
//{
//	test03();
//	return 0;
//}