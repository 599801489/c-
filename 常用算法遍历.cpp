//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////transform �㷨 ��ָ����������Ԫ�ذ��˵���һ������
////ע�⣺transform �����Ŀ�����������ڴ棬������Ҫ������ǰ�����ڴ�
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
////���õĲ����㷨
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
//		cout << "�ҵ���" << (*it);
//	}
//	else
//	{
//		cout << "û";
//	}
//}
//class person {
//public :
//	int id;
//	int age;
//	person(int id, int age) :id(id), age(age) {};
//	bool operator==(const person& p) const //��Ҫ����const person& p
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
//		cout << "�ҵ���";
//	}
//	else
//	{
//		cout << "û";
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
////binary_search ���ֲ��ҷ�
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
//		cout << "�ҵ���" << endl;
//	}
//	//adjacent_find �㷨 �������ڵ��ظ�Ԫ��
//	vector<int>::iterator it =adjacent_find(v1.begin(), v1.end());
//	if (it!=v1.end())
//	{
//		cout << "�ҵ���" <<*it<< endl;
//	}
//	else
//	{
//		cout << "û" << endl;
//	}
//
//
//	//find_if �������ô�������������� ���ص�һ������������Ԫ�صĵ�����
//	vector<int>::iterator it2 = find_if(v1.begin(), v1.end(), mysearch);
//	if (it2 != v1.end())
//	{
//		cout << "�ҵ���" << *it2 << endl;
//	}
//	else
//	{
//		cout << "û" << endl;
//	}
//
//	//count   ����Ҫ���ҵ�Ԫ�س��ֵĴ��� count_if ����ͳ�ƴ��ڲ�ѯԪ�ص�Ԫ�ظ���
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