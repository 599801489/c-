//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<numeric>
//#include<functional>
//#include<deque>
//#include<time.h>
//using namespace std;
//class player
//{
//public:
//	string name;
//	int score[3];
//};
////����ѡ��
//void create_player(map<int, player> &mPlist , vector<int> &v1)
//{
//	string seedName = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	for (int i = 0; i < 24; i++)
//	{
//		player p;
//		p.name = "ѡ��:";
//		p.name += seedName[i];
//		for (int j = 0; j < 3; j++)
//		{
//			p.score[j] = 0;
//		}
//		int uid = 100 + i;
//		mPlist.insert(make_pair(uid, p)); //����ѡ�ָ�����Ϣ
//		v1.push_back(uid);
//	}
//}
//
////ѡ�ֳ�ǩ
//void set_Randow(vector<int>& v)
//{
//	random_shuffle(v.begin(), v.end());
//
//}
//
////����
//void set_score(int index, vector<int>& v1, map<int, player>& mPlist, vector<int>& v2)
//{
//	srand((unsigned int)time(NULL));
//	//��һ��intΪ���������ݷ����Զ����򣬵ڶ���Ϊ���
//	multimap<int, int,greater<int>> mGroup; //Ĭ�ϸ��ݷ��� ��С����
//	int group = 0;
//	for (vector<int>::iterator it = v1.begin();it != v1.end(); it++)
//	{
//		deque<int> dScore;
// 		//���
//		for (int i = 0; i < 10; i++)
//		{	
//			int score = rand() % 30 + 60;
//			dScore.push_back(score);
//		}
//		//����
//		sort(dScore.begin(), dScore.end());
//		//ȥ�������ͷ�
//		dScore.pop_back();
//		dScore.pop_front();
//		//��ƽ����
//	int total=accumulate(dScore.begin(), dScore.end(), 0);
//	int avg = total / dScore.size();
//	mPlist[*it].score[index - 1] = avg;
//	//�ѵ�ǰ��ѡ�ֱ�ŷŵ�mgroup�ܣ�
//	mGroup.insert(make_pair(avg, *it));
//	group++;
//	if (group % 6 == 0)
//	{
//		int numIdx = 0;
//		for (multimap<int, int>::iterator mit = mGroup.begin();mit!=mGroup.end();mit++)
//		{
//			if (numIdx>=3)
//			{
//				break;
//			}
//			v2.push_back((*mit).second);
//			numIdx++;
//		}
//		mGroup.clear();
//	}
//	}
//}
////��ӡ��������
//void show_Good_player(int index, vector<int>& v, map<int, player>& mPlist)
//{
//	cout << "��" << index << "������" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����:" << mPlist[*it].name << " " << mPlist[*it].score[index - 1] << endl;
//	}
//
//}
//int main(void)
//{
//	//����map����,����ѡ�ֱ����Ϣ
//	map<int, player> mPlist;
//	//��һ�ֱ��������б�
//	vector<int> v1; //24�˽���12��
//
//	//�ڶ��ֱ����Ĳ����б�
//	vector<int> v2; //12�˽���6��
//
//	//�����ֱ����Ĳ����б�
//	vector<int> v3;//6�˽���3��
//
//	//����ǰ����
//	vector<int> v4;
//
//	create_player(mPlist, v1);
//
//	//��һ�ֱ���
//	set_Randow(v1);
//	set_score(1, v1, mPlist, v2);//���
//	show_Good_player(1, v2, mPlist);
//
//	//�ڶ��ֱ���
//	set_Randow(v2);
//	set_score(2, v2, mPlist, v3);//���
//	show_Good_player(2, v3, mPlist);
//
//	//�����ֱ���
//	set_Randow(v3);
//	set_score(3, v3, mPlist, v4);//���
//	show_Good_player(3, v4, mPlist);
//}