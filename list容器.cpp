//#include<iostream>
//#include<list>
//using namespace std;
//
////��ʼ��
//void test01()
//{
//	list<int> mlist;
//	list<int> mlist2(10, 2);//�вι���
//	list<int> mlist3(mlist2);//��������
//	list<int> mlist4(mlist2.begin(), mlist2.end());
//	for (list<int> ::iterator it = mlist4.begin(); it != mlist4.end(); it++)
//	{
//		cout << *it<< endl;
//	}
//
//}
//
////�����ɾ��
//void test02()
//{
//	list<int> mlist;
//	mlist.push_back(100);
//	mlist.push_front(200);
//	mlist.insert(mlist.begin(), 300);
//	list<int> ::iterator it = mlist.begin();
//	mlist.insert(it, 500);
//
//	//ɾ��
//	mlist.pop_back();
//	mlist.pop_front();
//	mlist.erase(mlist.begin(), mlist.end());//ɾ������
//	mlist.remove(200);
//
//
//}
////��ֵ
//void test03()
//{
//	list<int> mlist;
//	mlist.assign(10, 2);
//
//	list<int> mlist2;
//	mlist2 = mlist;
//
//	mlist2.swap(mlist);
//}
//
//
////����  ��ת
//void test04()
//{
//	list<int> mlist;
//	for (int i = 0; i < 10; i++)
//	{
//		mlist.push_back(i);
//	}
//	for (list<int> ::iterator it = mlist.begin(); it != mlist.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//����Ԫ�ط�ת
//	mlist.reverse();
//
//	for (list<int> ::iterator it = mlist.begin(); it != mlist.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//}
//
//void test05()
//{
//	list<int> mlist;
//	mlist.push_back(2);
//	mlist.push_back(6);
//	mlist.push_back(1);
//	mlist.push_back(9);
//	mlist.sort();
//
//	for (list<int> ::iterator it = mlist.begin(); it != mlist.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//}
//
//
//int main()
//{
//	test05();
//}