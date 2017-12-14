## 理解   
### 所谓的输出流是从程序输出到其他地方，所以，要写入文件的话，创建于个输出流对象，让程序的数据流向文件.   
**让程序写入文件这样需要做**   
* 创建一个`oftream`对象   
* 将对象与特定的文件关联起来   
* 使用`cout`的方法，写入文件
```C++
ofstream fout;
	fout.open("test.txt");
	fout << "这是一个测试";
	fout.close();
```
### 输入流是让数据从其他地方流向程序，所以，要读取文件的话，创建输入流对象，让文件的数据流向程序，做处理。
**让程序读取文件**
* 创建输入流对象`iftream`
* 将对象和文件关联起来
* 使用`cin`的方法，读取文件。
```C++
char Buff[200] = { 0 };
	ifstream fin;
	fin.open("test.txt");
	fin >>Buff;
	cout << Buff;
  fin.close();
```
