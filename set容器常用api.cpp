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
////set������ʼ��
//void test1()
//{
//	set<int> s1; //�Զ�����  Ĭ�ϴ�С����
//	s1.insert(7);
//	s1.insert(2);
//	s1.insert(9);
//	s1.insert(4);
//	printSet(s1);
//
//	//��θı�Ĭ������
//
//}
////��ֵ����  ɾ��
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
//	//ɾ��
//	s1.erase(s1.begin());
//	s1.erase(4); //ɾ��set����4
//	printSet(s1);
//}
//
////set����
//void test03()
//{
//	set<int> s1;
//	s1.insert(7);
//	s1.insert(2);
//	s1.insert(9);
//	s1.insert(4);
//	s1.insert(4);
//	set<int>::iterator it=s1.find(24);//�����Ϊkey-valueΪͬһ��ֵ�� ���ص�����
//	if (it == s1.end())
//	{
//		cout << "�Ҳ���";
//	}
//	else
//	{
//		cout << *it;
//	}
//
//	//�ҵ���һ�����ڵ���key��Ԫ��
//	set<int>::iterator rel=s1.lower_bound(2);  //ȥ����ֵΪ2   ���û���ҵ�2  ��ô�ͷ���>=2��
//	if (rel == s1.end())
//	{
//		cout << "�Ҳ���";
//	}
//	else
//	{
//		cout << *rel;
//	}
//	cout << endl;
//	//�ҵ�һ������key��ֵ
//	set<int>::iterator rel2=s1.upper_bound(2);
//	if (rel2 == s1.end())
//	{
//		cout << "�Ҳ���";
//	}
//	else
//	{
//		cout << *rel2;
//	}
//
//	//equal_range ����Lower_bound��upper_boundֵ
//	pair<set<int>::iterator, set<int>::iterator> myret=s1.equal_range(2);
//	myret.first;//��ʾ��һ��������
//	myret.second;//��ʾ�ڶ���������
//
//	if (myret.first == s1.end())
//	{
//		cout << "û�ҵ�";
//	}
//	else
//	{
//		cout << "myret.firstΪ��" << *(myret.first) << endl;
//	}
//
//	if (myret.second == s1.end())
//	{
//		cout << "û�ҵ�";
//	}
//	else
//	{
//		cout << "myret.secondΪ��" << *(myret.second) << endl;
//	}
//
//}
//
//int main()
//{
//	test03();
//	return 0;
//}