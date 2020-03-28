//#include<iostream>
//using namespace std;
//#include<string>
//void test01()
//{
//	string s1;//调用无参构造
//	
//	string s2(10, 'a');
//	string s3("abcdefg");
//	string s4(s3);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}
//void test02()
//{
//	string s1 = "abcdfg";
//	//重载[]操作符
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i];
//	}
//	cout << endl;
//
//	//at成员函数
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1.at(i) << endl;
//
//	}
//	//区别：[]方式 如果访问越界，直接挂掉
//	//at方式 如果访问越界 抛异常out_of_range
//	try
//	{
//		cout << s1.at(100);
//	}
//	catch (...)
//	{
//		cout << "越界";
//	}
//
//}
//
//void test03()
//{
//	string s = "abc";
//	s += "edf";
//	//cout << s;
//	string s2 = "hig";
//	s.append(s2);
//	cout << s<<endl;
//	cout<<s + s2;
//}
////查找
//void test05()
//{
//	string s = "abchig";
//	//查找g第一次出现的位置
//	int pos=s.find("g");
//	cout << pos;
//	//查找g最后一次出现的位置
//	pos = s.rfind("g");
//}
//int main()
//{
//	void test05();
//		
//	return 0;
//}