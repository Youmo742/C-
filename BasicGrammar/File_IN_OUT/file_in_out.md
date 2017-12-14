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
------------------------
常量 | 含义
----- | ----------------------
ios_base::in | 打开文件，以便读取
ios_base::out | 打开文件，以便写入
ios_base::app | 追加到文件尾
ios_base::binary | 二进制文件
ios_base::trunc | 如果文件存在，则删除内容

------------------------------------
在文件追加东西
```C++
ofstream fout;
	fout.open("test.txt",ios_base::out|ios_base::app);
	fout << "这是一个测试";
	string name = "Alex";
	fout << name<<endl;
	fout.close();
```
----------------------------------------
### 两种在文件中移动的方式
`seekg()`和`seekp()`   
* 前者将输入指针移动到指定位置，后者将输出指针移动到指定位置。
* 两者都是模板
```C++
1 istream & seekg(streamoff,ios_base::seekdir);
2 istream & seekg(streampos);
//第一种，将定位到距离第二个参数的特定距离。
//第二种，将定位到距离开头的特定距离。
//ios_base::seekdir有三种可能的值
//ios_base::beg,指文件开始处
//ios_base::end,指文件结尾处
//ios—base::cur,指当前位置
```

------------------------------------
### 一些实验结论
* 添加内容，只能在结尾添加。
* 以`ios_base::app`方式打开，只能在结尾添加，不能进行修改。
