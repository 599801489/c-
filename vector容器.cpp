//#include<iostream>
//using namespace std;
//#include<vector>
//
//void pringVector(vector<int>& v)
//{
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//}
//
////��ʼ��
//void test01()
//{
//	vector<int> v1;//Ĭ�Ϲ���
//	int arr[] = { 1,2,3,4 };
//	vector<int >v2(arr, arr + sizeof(arr) / sizeof(int));
//	vector<int> v3(v2.begin(), v2.end());
//	vector<int> v4(v3);
//	pringVector(v1);
//	pringVector(v2);
//	pringVector(v3);
//
//	pringVector(v4);
//
//}
////���ø�ֵ����
//void test02()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//Ĭ�Ϲ���
//	vector<int> v2;
//	v2.assign(v1.begin(), v1.end());
//
//	//����
//	vector<int> v3;
//	v3 = v2;
//}
//void test03()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//Ĭ�Ϲ���
//	cout << v1.size() << endl; //����v1�Ĵ�С
//	if (v1.empty()) //�ж��Ƿ�Ϊ�� 
//	{
//		cout << "��";
//	}
//
//	v1.resize(3);
//	pringVector(v1);
//
//	cout << v1.capacity() << endl;//����  �����ʹ�С���ܲ���� ������=size
//}
//
////vector���ݴ�ȡ
//void test04()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//Ĭ�Ϲ���
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << endl;
//	}
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << endl;
//	}
//	//����at���쳣��[]�����쳣
//
//	cout << v1.front();
//	cout << v1.back();
//}
////�����ɾ��
//void test05()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.insert(v.begin(),2, 30);
//	v.insert(v.end(), 40);
//	v.insert(v.begin() + 4, 100);//�����5��  ��Ϊvector֧��������� ������+2
//	//֧�������±�ģ�һ�㶼֧���������
//	//����������ֱ��+2 +3 -2 -3
//	pringVector(v);
//	
//	//ɾ��
//	v.erase(v.begin() + 2, v.begin() + 5);
//	pringVector(v);
//	v.clear();
//}
////��swap�����ռ�
//void test06()
//{
//	//vector���Ԫ�أ������Զ���������ɾ��Ԫ��ʱ�������Զ�����
//	vector<int> v;
//	for (int i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//	}
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//	v.resize(10);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	//�����ռ�
//	vector<int>(v).swap(v);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//}
//
//void test07()
//{
//	//reserve Ԥ���ռ�
//
//	int num = 0;
//	int* address = NULL;
//	vector<int> v;
//	v.reserve(10000);
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		
//		if (address != &(v[0])) //&(v[0])��ȡ�׵�ַ
//		{
//			address = &(v[0]);
//			num++;
//		}
//	}
//	cout << num;
//	//���֪���������Ҫ�洢��Ԫ�ظ�������ô������resrerveԤ���ռ�
//
//}
//int main()
//{
//
//	test07();
//
//	return 0;
//}