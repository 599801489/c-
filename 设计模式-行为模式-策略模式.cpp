//#include<iostream>
//using namespace std;
//
////������������
//class WeaponStrategy
//{
//public:
//	virtual void UseWeapon() = 0;
//};
//
//class Knife :public WeaponStrategy
//{
//public:
//	virtual void UseWeapon()
//	{
//		cout << "ʹ��ذ��" << endl;
//	}
//};
//class AK47 :public WeaponStrategy
//{
//public:
//	virtual void UseWeapon()
//	{
//		cout << "ʹ��AK47" << endl;
//	}
//};
//
//class Person
//{
//public:
//	WeaponStrategy* person;
//	void setWapon(WeaponStrategy* wepen)
//	{
//		person = wepen;
//	}
//	void ThrowWepon()
//	{
//		person->UseWeapon();
//	}
//};
//
//void test01()
//{
//	Person* person = new Person;
//	//��������
//	WeaponStrategy* knife = new Knife;
//	WeaponStrategy* Ak47 = new AK47;
//	person->setWapon(knife);
//	person->ThrowWepon();
//	person->setWapon(Ak47);
//	person->ThrowWepon();
//}
//
//int main(void)
//{
//
//cout<<"";
//
//}