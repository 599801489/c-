//#include<iostream>
//using namespace std;
//
////抽象武器策略
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
//		cout << "使用匕首" << endl;
//	}
//};
//class AK47 :public WeaponStrategy
//{
//public:
//	virtual void UseWeapon()
//	{
//		cout << "使用AK47" << endl;
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
//	//武器策略
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