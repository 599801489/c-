//#include<iostream>
//using namespace std;
//#include<fstream> //�ļ���д
////�ı��ļ���д
//void test1()
//{
//	string filename = "D:\\ws\\source.txt";
//	ifstream ism(filename,ios::in);//ֻ����ʽ���ļ�
//	ofstream osm("D:\\ws\\target.txt", ios::out|ios::app); //ios::app׷�ӵķ�ʽ���
//	//ifstream ism;
//	////ism.open(filename,ios::in) �ڶ��ַ�ʽ���ļ�
//	if (!ism)
//	{
//		cout << "���ļ�ʧ��";
//		return;
//	}
//	//���ļ�
//	char ch;
//	while (ism.get(ch))
//	{
//		cout << ch;
//		osm.put(ch);
//	}
//	//�ر��ļ�
//	ism.close();
//	osm.close();
//}
//
////�������ļ����� �������л�
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
//	//�ı�ģʽ�������ı��ļ���
//	//������ģʽ�����Ƕ������ļ���
//	string filename = "D:\\ws\\target.txt";
//#if 0
//
//
//
//	person p1(10, 20), p2(30, 40); //�Զ����Ƶķ�ʽ�����ڴ���
//	//��P1 p2д���ļ���
//	string filename = "D:\\ws\\target.txt";
//	ofstream osm(filename, ios::out | ios::binary); //�Զ�����д��ʽ��
//	osm.write((char*)&p1,sizeof(person));//�����Ʒ�ʽд�ļ�
//	osm.write((char*)& p2, sizeof(person));
//	osm.close();
//#endif // 0
//	ifstream ism(filename, ios::in | ios::binary);
//	person p1,p2;
//	ism.read((char*)& p1, sizeof(person));//���ļ���ȡ��
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