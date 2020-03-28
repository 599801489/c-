//#include<iostream>
//using namespace std;
//#include<fstream> //文件独写
////文本文件独写
//void test1()
//{
//	string filename = "D:\\ws\\source.txt";
//	ifstream ism(filename,ios::in);//只读方式打开文件
//	ofstream osm("D:\\ws\\target.txt", ios::out|ios::app); //ios::app追加的方式添加
//	//ifstream ism;
//	////ism.open(filename,ios::in) 第二种方式打开文件
//	if (!ism)
//	{
//		cout << "打开文件失败";
//		return;
//	}
//	//读文件
//	char ch;
//	while (ism.get(ch))
//	{
//		cout << ch;
//		osm.put(ch);
//	}
//	//关闭文件
//	ism.close();
//	osm.close();
//}
//
////二进制文件操作 对象序列化
//class person {
//public:
//	int age;
//	int id;
//	person() {};
//	person(int age, int id) :age(age), id(id) {	};
//	void show()
//	{
//		cout << age << id;
//	}
//};
//void test02()
//{
//	//文本模式读的是文本文件？
//	//二进制模式读的是二进制文件？
//	string filename = "D:\\ws\\target.txt";
//#if 0
//
//
//
//	person p1(10, 20), p2(30, 40); //以二进制的方式放入内存中
//	//把P1 p2写进文件里
//	string filename = "D:\\ws\\target.txt";
//	ofstream osm(filename, ios::out | ios::binary); //以二进制写方式打开
//	osm.write((char*)&p1,sizeof(person));//二进制方式写文件
//	osm.write((char*)& p2, sizeof(person));
//	osm.close();
//#endif // 0
//	ifstream ism(filename, ios::in | ios::binary);
//	person p1,p2;
//	ism.read((char*)& p1, sizeof(person));//从文件读取数
//	 p1.show();
//
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}