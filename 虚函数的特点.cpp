//#include <iostream>
//using namespace std;
//
//class farther
//{
//public:
//	 void show() //��virtual���ں���ǰ��  �����������һ���麯��
//		 //��������д����ʱ���������ֵ�ǵ�ǰ���ָ�� ��������  ��ſ���  ���������Э��
//	{
//		cout << "class farther" << endl;
//	}
//	 
//};
//class son : public farther
//{
//public:
//	int aa; //��  ֻ����ں�����
//	int show()
//	{
//		
//		cout << "son" << endl;
//		return 2;
//	}
//};
//
//int main()
//{
//
//	farther* fa = new son;  //�����;���ָ���ʹ�ÿռ�  ����ָ��ָ���ĸ��� ���͵����ĸ�����麯��
//	fa->show(); //��ͨ��ֻ�ܵ�������ĳ�Ա �����virtual�Ϳ��Ե�������� ֻ�и��������ĺ�������һ�� ���ܴﵽ�麯����Ч��
//	return 0;
//}