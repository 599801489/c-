//#include<iostream>
//using namespace std;
//#include<string>
//void test01()
//{
//	string s1;//�����޲ι���
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
//	//����[]������
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i];
//	}
//	cout << endl;
//
//	//at��Ա����
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1.at(i) << endl;
//
//	}
//	//����[]��ʽ �������Խ�磬ֱ�ӹҵ�
//	//at��ʽ �������Խ�� ���쳣out_of_range
//	try
//	{
//		cout << s1.at(100);
//	}
//	catch (...)
//	{
//		cout << "Խ��";
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
////����
//void test05()
//{
//	string s = "abchig";
//	//����g��һ�γ��ֵ�λ��
//	int pos=s.find("g");
//	cout << pos;
//	//����g���һ�γ��ֵ�λ��
//	pos = s.rfind("g");
//}
//int main()
//{
//	void test05();
//		
//	return 0;
//}