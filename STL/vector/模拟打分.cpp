//ģ����ί���ϵͳ���������ѡ��
/*
Ҫ��ӵ÷���ȥ��һ����߷֣�ȥ��һ����ͷ֣���ƽ���֡�
��STL��ѧϰSTL
����һ��ѡ����
*/

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <queue>
#include <algorithm>
#include <ctime>
using namespace std;
class Palyer
{
public:
	Palyer(){}
	Palyer(string name, int score) :pl_name(name), pl_score(score){}
public:
	string pl_name;
	int pl_score;
};

//����ѡ��
void CreatPalyer(vector<Palyer>& v_Palyer)
{
	string name[]{ "С��","�","����","С��","����" };
	for (int i = 0;i < 5;i++)
	{
		Palyer p;
		p.pl_name = name[i];
		p.pl_score = 0;
		v_Palyer.push_back(p);
	}
}
//��ѡ�ִ��
void SetScore(vector<Palyer>&v_Palyer)
{
	for (vector<Palyer>::iterator it_Palyer = v_Palyer.begin();it_Palyer != v_Palyer.end();it_Palyer++)
	{
		//��ѡ�ֵĵ÷ֱ�����һ��������
		deque<int>que;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 20 + 80;
			que.push_back(score);
		}
		sort(que.begin(), que.end());
		que.pop_back();//ɾ�����ֵ
		que.pop_front();//ɾ����ͷ�

		int totol_score=0;
		for (deque<int>::iterator it = que.begin();it != que.end();it++)
		{
			totol_score += (*it);
		}
		(*it_Palyer).pl_score = (totol_score / que.size());
	}
}
//��ӡѡ�ּ��������������
//����ʽ
bool Mycom(Palyer& p1, Palyer &p2)
{
	return p1.pl_score < p2.pl_score;
}
void PrintPalyer(vector<Palyer>&v_Palyer)
{
	sort(v_Palyer.begin(), v_Palyer.end(), Mycom);
	//��ӡ
	for (vector<Palyer>::iterator it = v_Palyer.begin();it != v_Palyer.end();it++)
	{
		cout << (*it).pl_name << " " << (*it).pl_score << endl;
	}
}
int main()
{
	srand(time(NULL));
	vector<Palyer> Person;
	CreatPalyer(Person);
	SetScore(Person);
	PrintPalyer(Person);
	system("pause");
	return 0;
}