//#include<iostream>
//#include<map>
//using namespace std;
//#include<vector>
//#include<string>
//
//#define SALE_DEPATMENT 1;
//#define DAVELOP_DEPATMENT 2;
//#define FINACLI_DEPATMENT 3;
//
////multimap����
////��˾������Ƹ��5��Ա����5��Ա�����빫˾֮����Ҫָ��Ա�����ĸ����Ź���
////��Ա��Ϣ������ ���� �绰 ���ʵ����
////ͨ��multimap������Ϣ�Ĳ��� ������ʾ
////�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ
//
//class worker {
//public:
//	string name;
//	string tetle;
//	int age;
//	int sala;
//	worker(string name,
//		string tetle,
//		int age,
//		int sala) :name(name), age(age), tetle(tetle), sala(sala) {};
//	worker() {};
//};
////����Ա��
//void Create_worker(vector<worker>& vworker)
//{
//	string seedName = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		worker worke;
//		worke.name = "Ա��";
//		worke.name += seedName[i];
//		worke.age = rand() % 10 + 20;
//		worke.sala = rand() % 1000 + 2000;
//		worke.tetle = "123456";
//		vworker.push_back(worke);
//	}
//}
////Ա������
//void workByGroup(vector<worker>& vworker, multimap<int,worker>& workGroup)
//{
//	//��Ա��������䲻ͬ�Ĳ���
//	for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
//	{
//		int departID = rand() % 3 + 1;
//		switch (departID)
//		{
//		case 1:
//			workGroup.insert(make_pair( 1, *it));
//			break;
//		case 2:
//			workGroup.insert(make_pair(2, *it));
//			break;
//		case 3:
//			workGroup.insert(make_pair(3, *it));
//			break;
//		
//		
//		}
//	}
//}
//void showGroupWork(multimap<int, worker>& workGroup, int Departid)
//{
//	multimap<int, worker>::iterator it = workGroup.find(Departid);
//	int DepartCount = workGroup.count(1);
//	int num = 0;
//	for (multimap<int, worker>::iterator pos = it; it != workGroup.end() && num < DepartCount; pos++, num++)
//	{
//		cout << " ����:" << pos->second.name << "   ����:" << pos->second.age << "   ����:" << pos->second.sala << endl;
//
//	}
//}
//
//
//
////��ӡÿ�����ŵ�Ա����Ϣ
//void PrintWorker(multimap<int, worker>& workGroup)
//{
//	showGroupWork(workGroup, 1);
//	showGroupWork(workGroup, 2);
//	showGroupWork(workGroup, 3);
//}
//
//
//void main()
//{
//	//���Ա����Ϣ
//	vector<worker> vworker;
//	//multimap���������Ϣ
//	multimap<int, worker> workGroup;
//	//����Ա��
//	Create_worker(vworker);
//
//	//Ա������
//	workByGroup(vworker, workGroup);
//
//	//��ӡÿ�����ŵ�Ա����Ϣ
//	PrintWorker(workGroup);
//}