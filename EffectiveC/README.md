**为以后高效的编程，先囫囵吞枣的看一遍EffectiveC++，好多东西不理解，先记住，以后再慢慢啃**   

----------------------------------------------
* 对于常量，使用`const`或者`enums{}`来替换`#define`。
* 类似于宏定义的函数，改为`inline`代替`#define`。   
* `const`是个好东西，尽量使用`const`。   
* 在创建对象或者变量时，确保初始化，避免不确定行为
* 构造函数使用成员初始列
```C++
class Stu
{
  Stu(string name,int num):s_name(name),s_num(num)
  {};
  private:
  string s_name;
  int s_name;
}
```
----------------------------------------
### 构造/析构/赋值运算
* 当你没有声明构造/析构函数的话，编译器自动为你创建一个无参数的构造函数，赋值构造函数和一个赋值运算符。
* 作为基类的类，其析构函数应该声明为`virtual`，如果一个类有虚函数，则应将析构函数声明为`virtual`。
* 若不作为基类，不要声明`virtual`函数。 
* 不再构造和析构函数中调用虚函数。 
* 令赋值操作返回一个 `* this`。
```C++
class Widget{
Widget & operate=(const Widget & rhs)
  {
    ...
    return *this;
  }
}
```
* `copy`构造函数时，确保每一部分都赋值，尤其注意浅复制的问题。
### 资源管理
* `std::auto_ptr<type>`是个好东西，可惜我不会用，还不懂。
* 成对使用`new && delete`采用相同格式
```C++
int *ptr=new int[20];
...
delete [] ptr;
```
