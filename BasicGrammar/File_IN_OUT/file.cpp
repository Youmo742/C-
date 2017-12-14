#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	/*
	ofstream fout;
	fout.open("test.txt");
	fout << "这是一个测试"<<"why you ";
	string name = "Alex,do you know?";
	fout << name<<endl;
	fout.close();
	*以顺序的方式写入文件，哪个在前，写入哪个
	*/
	/*
	char Buff[200] = { 0 };
	ifstream fin;
	fin.open("test.txt");
	fin >>Buff;
	cout << Buff;
	fin.close();
	*/
	/*
	ofstream fout;
	fout.open("test.txt", ios_base::out | ios_base::app);
	fout << "这是一个测试";
	string name = "Alex";
	fout << name << endl;
	fout.close();
	*添加到结尾
	*/
	/*
	ofstream fout;
	fout.open("test.txt", ios_base::binary|ios_base::out | ios_base::in);
	fout.seekp(6);
	fout << "我是一个好人" << endl;
	*/
	system("pause");
}
