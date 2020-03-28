//#include<iostream>
//#include<vector> //动态数组 可变数组
//#include<algorithm>
//using namespace std;
////stl基本语法
//void PrintVector(int v)
//{
//	cout << v << endl;
//}
//
//void test01()
//{
//	vector<int> v;//定义一个容器，并且指定这容器存放的类型为int
//	v.push_back(10); 
//	v.push_back(20); 
//	v.push_back(30); 
//	v.push_back(40); 
//
//	//通过stl提供的算法for——each算法进行遍历
//
//	//容器提供迭代器
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//	//容器中可能存放基础数据类型，也可能存放自定义数据类型
//	for_each(pBegin, pEnd, PrintVector);
//}
////容器也可以存放自定义的数据类型
//class person
//{
//public:
//	int age;
//	int id;
//	person(int age, int id) :age(age), id(id) {};
//};
//void  test02()
//{
//	//创建容器，并且指定容器元素类型是Person
//	vector<person> v;
//	person p1(10, 20), p2(30, 40), p3(50, 60);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//遍历
//	for (vector<person>::iterator it=v.begin();it != v.end() ;it++)
//	{
//		cout << (*it).age<<(*it).id<<endl;
//	}
//
//
//
//}
//int main()
//{
//	test02();
//}