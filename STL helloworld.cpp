//#include<iostream>
//#include<vector> //��̬���� �ɱ�����
//#include<algorithm>
//using namespace std;
////stl�����﷨
//void PrintVector(int v)
//{
//	cout << v << endl;
//}
//
//void test01()
//{
//	vector<int> v;//����һ������������ָ����������ŵ�����Ϊint
//	v.push_back(10); 
//	v.push_back(20); 
//	v.push_back(30); 
//	v.push_back(40); 
//
//	//ͨ��stl�ṩ���㷨for����each�㷨���б���
//
//	//�����ṩ������
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//	//�����п��ܴ�Ż����������ͣ�Ҳ���ܴ���Զ�����������
//	for_each(pBegin, pEnd, PrintVector);
//}
////����Ҳ���Դ���Զ������������
//class person
//{
//public:
//	int age;
//	int id;
//	person(int age, int id) :age(age), id(id) {};
//};
//void  test02()
//{
//	//��������������ָ������Ԫ��������Person
//	vector<person> v;
//	person p1(10, 20), p2(30, 40), p3(50, 60);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//����
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