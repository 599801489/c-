//#include <iostream>
//#include<map>
//using namespace std;
//
//map��ʼ��
//void test01()
//{
//	map����ģ���������һ��Ϊkey���ͣ��ڶ���Ϊmap����
//	map<int, int> mymap;
//	�������� pair.first pair.second;
//	��һ��
//	pair<map<int, int>::iterator, bool> ret= mymap.insert(pair<int, int>(10, 10));
//	 ret = mymap.insert(pair<int, int>(10, 40));
//	 if (ret.second)
//	 {
//		 cout << "����ɹ�";
//	 }
//	�ڶ���
//	mymap.insert(make_pair(10, 20));
//	if (ret.second)
//	{
//		cout << "����ɹ�";
//	}
//	������
//	mymap.insert(map<int, int>::value_type(20, 30));
//	
//	������
//	mymap[40] = 40;
//	cout << endl;
//	mymap[10] = 60; //�������key�����ڣ���ô�ʹ���pair���뵽������
//	�������key���ڣ���ô���޸�
//	mymap[50] = 70;
//	������ ��ӡ
//	for (map<int,int>::iterator it=mymap.begin();it!=mymap.end();it++)
//	{
//		cout <<"key"<< (*it).first << " " <<"value"<< (*it).second << endl;
//		cout << "key" << it->first << " " << "value" << it->second << endl;
//	}
//	���ͨ��[]��ʽ����һ�������ڵ�key����ô�Ὣ������ʵ�key���뵽map��
//	cout << mymap[80];
//
//}
//class Mykey {
//public:
//	int mindex;
//	int id;
//	Mykey(int index, int id) :mindex(index), id(id) {};
//};
//struct mycompare
//{
//	bool operator()(Mykey k1,Mykey k2){
//		return k1.mindex > k2.mindex;
//	}
//};
//
//void test02()
//{
//	map<Mykey, int, mycompare> mymap; //�Զ����� mycompareΪָ���������
//	mymap.insert(make_pair(Mykey(1, 2), 10));
//	mymap.insert(make_pair(Mykey(3, 4), 20));
//	for (map<Mykey, int, mycompare>::iterator it = mymap.begin(); it != mymap.end(); it++)
//	{
//		cout << it->first.mindex;
//	}
//}
//
//void main()
//{
//	test01();
//}