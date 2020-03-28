//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
////仿函数适配器bindist bind2st 绑定适配器
////防函数适配器 not1 not2
////仿函数适配器 ptr_fun
////成员函数适配器 mem_fun mem_fun_ref
//
//struct MyStruct :public binary_function<int,int,void>
//{
//	void operator()(int v,int val) const
//	{
//		cout << "v:" << v << " val:" << val << ""<<endl;
//		cout << v+val<<" "<<endl;
//	}
//};
//struct MyStruct2:public unary_function<int,bool>
//{
//	bool operator()(int v) const
//	{
//		return v > 5;
//	}
//};
////仿函数适配器bindist bind2st 绑定适配器
//void test01()
//{
//	vector<int >v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	int addnum = 100;
//	for_each(v.begin(), v.end(), bind1st(MyStruct(), addnum));
//
//	//绑定适配器 将一个二元函数对象 转变成一元的函数对象
//	//bind1st bind1st区别 1st将num参数绑定为函数对象的第一个参数，2nd 将num参数绑定为对象的第二个参数
//}
//
////防函数适配器 not1 not2
//void test02()
//{
//	vector<int >v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//not1 not2
//	//如果对二元谓词取反，用not2
//	//如果对一元谓词取反 用not1
//	vector<int>::iterator it= find_if(v.begin(), v.end(), not1(MyStruct2()));
//	if (it == v.end())
//	{
//		cout << "没有找到";
//	};
//
//	cout << (*it);
//	
//}
//void myprint03(int val,int val2)
//{
//	cout << val<<" "<<val2<<endl;
//	cout << val+val2<<endl;
//
//}
////防函数适配器 ptr_fun
//void test03()
//{
//	vector<int >v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//把普通函数适配成函数对象
//	for_each(v.begin(), v.end(), bind2nd(ptr_fun(myprint03),10));
//}
//
////成员函数适配器 mem_fun mem_fun_ref
//class person
//{
//public:
//	int age;
//	int id;
//	person(int age, int id) :age(age), id(id) {};
//	void show()
//	{
//		cout << age << " " << id << endl;
//	}
//};
//void test04()
//{
//	//如果容器中存放的是对象，或者或许指针，但是希望foreach算法打印的时候，调用类自己提供的打印函数
//	vector<person> v;
//	person p1(10, 20), p2(20, 30), p3(30, 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//格式：&类名：：函数名
//	for_each(v.begin(), v.end(), mem_fun_ref(&person::show));
//
//	vector<person*> v1;
//	v1.push_back(&p1);
//	v1.push_back(&p2);
//	v1.push_back(&p3);
//	cout << " --------------" << endl;
//	for_each(v1.begin(), v1.end(), mem_fun(&person::show));
//
//	//区别  如果存放的是对象指针用mem_fun 如果存放的是对象 那么用 mem_fun_ref;
//}
//
//int main()
//{
//	test04();
//	return 0;
//}