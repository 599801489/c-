//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
////�º���������bindist bind2st ��������
////������������ not1 not2
////�º��������� ptr_fun
////��Ա���������� mem_fun mem_fun_ref
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
////�º���������bindist bind2st ��������
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
//	//�������� ��һ����Ԫ�������� ת���һԪ�ĺ�������
//	//bind1st bind1st���� 1st��num������Ϊ��������ĵ�һ��������2nd ��num������Ϊ����ĵڶ�������
//}
//
////������������ not1 not2
//void test02()
//{
//	vector<int >v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//not1 not2
//	//����Զ�Ԫν��ȡ������not2
//	//�����һԪν��ȡ�� ��not1
//	vector<int>::iterator it= find_if(v.begin(), v.end(), not1(MyStruct2()));
//	if (it == v.end())
//	{
//		cout << "û���ҵ�";
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
////������������ ptr_fun
//void test03()
//{
//	vector<int >v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//����ͨ��������ɺ�������
//	for_each(v.begin(), v.end(), bind2nd(ptr_fun(myprint03),10));
//}
//
////��Ա���������� mem_fun mem_fun_ref
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
//	//��������д�ŵ��Ƕ��󣬻��߻���ָ�룬����ϣ��foreach�㷨��ӡ��ʱ�򣬵������Լ��ṩ�Ĵ�ӡ����
//	vector<person> v;
//	person p1(10, 20), p2(20, 30), p3(30, 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//��ʽ��&��������������
//	for_each(v.begin(), v.end(), mem_fun_ref(&person::show));
//
//	vector<person*> v1;
//	v1.push_back(&p1);
//	v1.push_back(&p2);
//	v1.push_back(&p3);
//	cout << " --------------" << endl;
//	for_each(v1.begin(), v1.end(), mem_fun(&person::show));
//
//	//����  �����ŵ��Ƕ���ָ����mem_fun �����ŵ��Ƕ��� ��ô�� mem_fun_ref;
//}
//
//int main()
//{
//	test04();
//	return 0;
//}