//模拟评委打分系统，排序输出选手
/*
要求从得分中去除一个最高分，去除一个最低分，求平均分。
用STL，学习STL
建立一个选手类
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

//创建选手
void CreatPalyer(vector<Palyer>& v_Palyer)
{
	string name[]{ "小明","李华","王雅","小黑","大嘴" };
	for (int i = 0;i < 5;i++)
	{
		Palyer p;
		p.pl_name = name[i];
		p.pl_score = 0;
		v_Palyer.push_back(p);
	}
}
//给选手打分
void SetScore(vector<Palyer>&v_Palyer)
{
	for (vector<Palyer>::iterator it_Palyer = v_Palyer.begin();it_Palyer != v_Palyer.end();it_Palyer++)
	{
		//将选手的得分保存在一个队列中
		deque<int>que;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 20 + 80;
			que.push_back(score);
		}
		sort(que.begin(), que.end());
		que.pop_back();//删除最大值
		que.pop_front();//删除最低分

		int totol_score=0;
		for (deque<int>::iterator it = que.begin();it != que.end();it++)
		{
			totol_score += (*it);
		}
		(*it_Palyer).pl_score = (totol_score / que.size());
	}
}
//打印选手及其分数，并排序
//排序方式
bool Mycom(Palyer& p1, Palyer &p2)
{
	return p1.pl_score < p2.pl_score;
}
void PrintPalyer(vector<Palyer>&v_Palyer)
{
	sort(v_Palyer.begin(), v_Palyer.end(), Mycom);
	//打印
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
