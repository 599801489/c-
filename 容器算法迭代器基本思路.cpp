//#include<iostream>
//using namespace std;
////算法 负责统计每个元素的个数
//int mycount(int* start, int* end,int val)
//{
//	int num = 0;
//	while (start != end)
//	{
//		if (*start == val)
//		{
//			num++;
//		}
//		
//	}
//	return num;
//	
//}
//
//int main()
//{
//
//	int arr[] = {1,2,3,4,2,3,5,6,4,1};
//	int* begin = arr;//指向容器第一个位置 迭代器开始位置
//	int* end = &(arr[sizeof(arr) / sizeof(int)]);//对最后一个元素取地址
//	int num = mycount(begin, end, 2);
//	cout << num;
//	return 0;
//}