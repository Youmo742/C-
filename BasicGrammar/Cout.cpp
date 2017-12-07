#include <iostream>

using namespace std;
int main()
{
	/*
	*cout << 5 << endl << "Love is you" << endl;
	*/
	/*
	*cout.put(98) <<"This will out 'b'"<<endl;
	*cout.put('T').put('98') << endl;//out T8
	*/
	/*
	*char *ptr1 = "cdad";
	*cout.write(ptr1, 5) << endl;
	*/
	/*
	//set a hex 16 mode
	hex(cout);
	cout << 12 << endl;// out c
	cout << 15 << endl;//out f
	//set a dec 10 mode
	dec(cout);
	cout << 65 << endl;
	*/
	/*
	cout << 5;
	cout.width(20);
	cout << "you" << endl;//5            you
	cout << 89 << endl;//并不会影响这个
	*/
	/*
	cout.fill('*');
	cout.width(6);
	cout << 5 << endl;//out ****5
	*/
	/*
	cout.precision(2);
	cout << 20.48 << endl;
	*/
	cout.setf(std::ios_base::showpoint);//默认6位
	cout.precision(3);
	cout << 5.0 << endl;//out 5.00
	system("pause");
}
