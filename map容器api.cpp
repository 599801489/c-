//#include <iostream>
//#include<map>
//using namespace std;
//
//map初始化
//void test01()
//{
//	map容器模板参数：第一个为key类型，第二个为map类型
//	map<int, int> mymap;
//	插入数据 pair.first pair.second;
//	第一种
//	pair<map<int, int>::iterator, bool> ret= mymap.insert(pair<int, int>(10, 10));
//	 ret = mymap.insert(pair<int, int>(10, 40));
//	 if (ret.second)
//	 {
//		 cout << "插入成功";
//	 }
//	第二种
//	mymap.insert(make_pair(10, 20));
//	if (ret.second)
//	{
//		cout << "插入成功";
//	}
//	第三种
//	mymap.insert(map<int, int>::value_type(20, 30));
//	
//	第四种
//	mymap[40] = 40;
//	cout << endl;
//	mymap[10] = 60; //如果发现key不存在，那么就创建pair插入到容器中
//	如果发现key存在，那么就修改
//	mymap[50] = 70;
//	迭代器 打印
//	for (map<int,int>::iterator it=mymap.begin();it!=mymap.end();it++)
//	{
//		cout <<"key"<< (*it).first << " " <<"value"<< (*it).second << endl;
//		cout << "key" << it->first << " " << "value" << it->second << endl;
//	}
//	如果通过[]方式访问一个不存在的key，那么会将这个访问的key插入到map中
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
//	map<Mykey, int, mycompare> mymap; //自动排序 mycompare为指定排序规则
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