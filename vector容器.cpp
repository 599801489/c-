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
////初始化
//void test01()
//{
//	vector<int> v1;//默认构造
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
////常用赋值操作
//void test02()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//默认构造
//	vector<int> v2;
//	v2.assign(v1.begin(), v1.end());
//
//	//重载
//	vector<int> v3;
//	v3 = v2;
//}
//void test03()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//默认构造
//	cout << v1.size() << endl; //返回v1的大小
//	if (v1.empty()) //判断是否为空 
//	{
//		cout << "空";
//	}
//
//	v1.resize(3);
//	pringVector(v1);
//
//	cout << v1.capacity() << endl;//容量  容量和大小可能不相等 容量《=size
//}
//
////vector数据存取
//void test04()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//默认构造
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
//	//区别：at跑异常，[]不抛异常
//
//	cout << v1.front();
//	cout << v1.back();
//}
////插入和删除
//void test05()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.insert(v.begin(),2, 30);
//	v.insert(v.end(), 40);
//	v.insert(v.begin() + 4, 100);//插入第5个  因为vector支持随机访问 所以能+2
//	//支持数组下标的，一般都支持随机访问
//	//迭代器可以直接+2 +3 -2 -3
//	pringVector(v);
//	
//	//删除
//	v.erase(v.begin() + 2, v.begin() + 5);
//	pringVector(v);
//	v.clear();
//}
////用swap缩减空间
//void test06()
//{
//	//vector添加元素，它会自动增长，当删除元素时，不会自动减少
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
//	//收缩空间
//	vector<int>(v).swap(v);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//}
//
//void test07()
//{
//	//reserve 预留空间
//
//	int num = 0;
//	int* address = NULL;
//	vector<int> v;
//	v.reserve(10000);
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		
//		if (address != &(v[0])) //&(v[0])存取首地址
//		{
//			address = &(v[0]);
//			num++;
//		}
//	}
//	cout << num;
//	//如果知道容器大概要存储的元素个数，那么可以用resrerve预留空间
//
//}
//int main()
//{
//
//	test07();
//
//	return 0;
//}