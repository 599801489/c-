//#include<iostream>
//using namespace std;
//
//
//template<typename T=int, typename Y=int>
//void PrintArr(T* arr,int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//}
////����
//template<typename T=int,typename Y=int>
//void mysort(T* arr, Y len) {
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i + 1; j < len; j++) {
//			//�Ӵ�С����
//			if (arr[i] < arr[j])
//			{
//				int temp;
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 2,4,6,1,3,4,5 }; //����
//	int len = sizeof(arr) / sizeof(int);//���鳤��
//	//����ǰ
//	PrintArr<>(arr, len);
//	mysort<>(arr, len);
//	PrintArr<>(arr, len);
//	cout << "------------------" << endl;
//	char charr[] = { 'a','b','t','j','h' };
//	int len2 = sizeof(charr) / sizeof(int);
//
//	PrintArr<char, int>(charr, len2);
//	mysort<char, int >(charr, len2);
//	cout << "--------�����----------" << endl;
//	PrintArr<char,int>(charr, len2);
//	return 0;
//}