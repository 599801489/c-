//#include<iostream>
//using namespace  std;
//class COut
//{
//public:
//	 int a;
//	 COut():in(this) //ͨ��thisָ��ĳ�ʼ���б���д���
//	 {
//		 a = 12;
//	 }
//public:
//	class CIn //��������洴����һ���� �ͽ��ڲ���
//	{
//	public:
//		int b;
//		COut* co;
//		CIn(COut* pf) :co(pf) //����ָ�� ָ���ʼ��
//		{
//			b = 16;
//			
//		}
//		void funin()
//		{
//			
//			cout << co->a; //�ڲ��಻��ʹ���ⲿ��ĳ�Ա
//			
//			
//		}
//	};
//public:
//	CIn in;  //��Ҫ���ⲿ���д���һ���ڲ������
//	
//};
//int main()
//{
//	COut Cu;  //����һ���ⲿ�����
//	Cu.a = 15; 
//	Cu.in.funin(); //ͨ���ⲿ���������ڲ�������ٵ����ಿ�������ĺ�����
//	return 0;
//}