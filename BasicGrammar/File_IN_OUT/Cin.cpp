#include <iostream>
using namespace std;

int main()
{
	/*char ptr[20];
	int dis;
	char ch;
	cin >>ptr>> dis>> ch;
	cout << ptr << endl << dis << endl << ch << endl;
	*/
	//若正常输入，则预期显示
	//若非正常输入，则输出ptr内容，下一行一串数字
	//我懂了，没有进行初始化，所以指向位置不确定
	//char ptr[20] = { 0 };
	/*
	char ptr[20];
	cin >> ptr;
	cout << ptr;//正常输入输出，以空格，换行，制表结束
	*/
	/*
	int dis;
	cin >> dis;
	cout << dis;
	*/
	/*
	char ch;
	//cin.get(ch);
	ch = cin.get();
	cout << ch;
	*/
	/*
	char ptr[20];
	cin.get(ptr, 20);
	cout << ptr;
	*/
	char ptr[20] = {0};
	char ch = 0;
	int i = 0;
	while ((ch = cin.peek()) != '#')
		cin.get(ptr[i++]);
	cout << ptr << endl;
	system("pause");

	return 0;
}