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
////multimap案例
////公司今天招聘了5个员工，5名员工进入公司之后，需要指派员工在哪个部门工作
////人员信息有姓名 年龄 电话 工资等组成
////通过multimap进行信息的插入 保存显示
////分部门显示员工信息 显示全部员工信息
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
////创建员工
//void Create_worker(vector<worker>& vworker)
//{
//	string seedName = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		worker worke;
//		worke.name = "员工";
//		worke.name += seedName[i];
//		worke.age = rand() % 10 + 20;
//		worke.sala = rand() % 1000 + 2000;
//		worke.tetle = "123456";
//		vworker.push_back(worke);
//	}
//}
////员工分组
//void workByGroup(vector<worker>& vworker, multimap<int,worker>& workGroup)
//{
//	//把员工随机分配不同的部门
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
//		cout << " 姓名:" << pos->second.name << "   年龄:" << pos->second.age << "   工资:" << pos->second.sala << endl;
//
//	}
//}
//
//
//
////打印每个部门的员工信息
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
//	//存放员工信息
//	vector<worker> vworker;
//	//multimap保存分组信息
//	multimap<int, worker> workGroup;
//	//创建员工
//	Create_worker(vworker);
//
//	//员工分组
//	workByGroup(vworker, workGroup);
//
//	//打印每个部门的员工信息
//	PrintWorker(workGroup);
//}