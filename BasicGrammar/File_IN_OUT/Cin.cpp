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
	//���������룬��Ԥ����ʾ
	//�����������룬�����ptr���ݣ���һ��һ������
	//�Ҷ��ˣ�û�н��г�ʼ��������ָ��λ�ò�ȷ��
	//char ptr[20] = { 0 };
	/*
	char ptr[20];
	cin >> ptr;
	cout << ptr;//��������������Կո񣬻��У��Ʊ����
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