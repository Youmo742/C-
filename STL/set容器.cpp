//set容器，关联容器，有迭代器，可以进行遍历
//底层实现为红黑树（平衡二叉树）
//只有insert方法，基础类型自动进行排序
//自定义类型，需要自己提供排序仿函数

#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

//for_each调用的输出函数
void PrintMy(int v)
{
	cout << v << " ";
}
//仿函数
class MyComp
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};
class Per
{
public:
	Per(int age,string name):age(age),name(name){}
public:
	int age;
	string name;
};
void test01()
{
	set<int,MyComp> st1;
	st1.insert(2);
	st1.insert(6);
	st1.insert(8);
	st1.insert(9);
	st1.insert(10);
	for_each(st1.begin(), st1.end(),PrintMy);
	cout << endl;
}
void test02()
{
	set<int> st1;
	st1.insert(2);
	st1.insert(6);
	st1.insert(4);
	st1.insert(5);
	st1.insert(8);
	st1.insert(9);
	st1.insert(10);
	//找到第一个大于等于key的值,如果没有找到
	//返回尾迭代器
	set<int>::iterator re = st1.find(6);
	/*if (re == st1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << *re << endl;
	}*/
	re = st1.lower_bound(4);
	cout << *re << endl;
	//对组返回一对值，参数为迭代器类型，第一个为first，第二个为second
	pair<set<int>::iterator, set<int>::iterator> mypair = st1.equal_range(5);
	if (mypair.first == st1.end())
	{
		cout << "NO" << endl;
	}
	else
		cout << "first" << (*mypair.first)<<endl;
	if (mypair.second == st1.end())
	{
		cout << "NO" << endl;
	}
	else
		cout << "second" << (*mypair.second) << endl;


}
//放入对象需要排序的仿函数
class Mycomp2
{
public:
	bool operator()(const Per& p1, const Per& p2)
	{
		return p1.age > p2.age;
	}
};
//在set容器中放入对象
void test03()
{
	Per p1(10,"A"),p2(20,"B"),p3(30,"C"),p4(40,"D");
	set<Per,Mycomp2> rt;
	rt.insert(p1);
	rt.insert(p2);
	rt.insert(p3);
	rt.insert(p4);

	for (set<Per>::iterator re = rt.begin();re != rt.end();re++)
	{
		cout << re->name << " " << re->age << endl;
	}
}
int main()
{
	/*test01();
	test02();*/
	test03();
	system("pause");
	return 0;
}
