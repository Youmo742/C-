#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <string> strvector;
	int intarray[]{ 6,5,2,3,7,8 };

	//用数组来初始化容器
	vector <int> intvector(intarray, intarray + size(intarray));

	//为向量容器声明一个迭代器
	//所谓迭代器，就相当于一个指针
	vector <int>::iterator position;


	//intvector = {5,4,7,6};
	//(intarray, intarray + 6);
	//在尾插入元素，并改变容器大小
	intvector.push_back(7);
	intvector.push_back(98);
	for (position = intvector.begin(); position != intvector.end(); ++position)
		cout << *position << " ";
	cout << endl;
	cout << "that is all" << endl;
	position = intvector.begin();
	cout << "delete elemtype is ";
	intvector.erase(position+5);
	//cout << intvector.at(*position)<<endl;
	cout << intvector.front() << endl;
	position = intvector.end();
	//intvector.erase(position);
	cout << "last elemtype is ";
	cout << intvector.back() << endl;
	cout << "容器元素总共为" <<" ";
	cout << intvector.size() << endl;
	intvector.clear();
	cout << intvector.empty() << endl;
	system("pause");
	return 0;
}
