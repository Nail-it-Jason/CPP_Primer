#### 2练习

2.3-2.4

```c++
u2 - u = 32
u - u2 = 4294967264
i2 - i = 32
i - i2 = -32
i - u = 0
u - i = 0
```

```c++
#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;
    std::cout << u2-u << ' ' << u-u2 << ' ' <<
    i2-i << ' ' << i-i2 << ' ' << i-u <<
    ' ' << u-i << std:: endl;
}
```

2.5

(a) 'a'普通字符，L'a'宽字符，"a"字符串a，L"a"宽字符串a

(b) 10十进制整数，10u无符号，10Llong整数，10uL unsigned long，012八进制，0xC十六进制

(c) 3.14浮点数double，3.14f是float，3.14L是long double

(d)10十进制整数，10u十进制无符号整数，10.浮点数double，10e-2浮点数double

2.6 前缀0表示八进制

2.7

(a) Who goes with Fergus?

(b-d) 3.14e1L long double;1024f 有问题，1024.f可以;3.14L long double

2.8

```c++
#include <iostream>

int main() {
    std::cout << "\x32\x4d\n" << std::endl;
    std::cout << "\t\x4d\n" << std::endl;
}
```

2.9

(a) 操作数不能定义

(b) 列表初始化不允许不匹配的类型

(c) 定义salary时不知道wage的类型

(d) 可以

2.10

空字符；0；不确定（此设备上为1）；空字符

2.11

定义；声明；声明。

2.12

(a) (c) (d)

2.13

100

2.14

合法，输出100和45

2.15

(b) 引用类型的初始值必须是一个对象

(d) 引用类型必须初始化

2.16

都是合法的。c和d会产生narrow conversion

2.17

10 10

2.19

指针：指针是一个变量，只不过这个变量存储的是一个地址，指向内存的一个存储单元，即指针是一个实体；而引用跟原来的变量实质上是同一个东西，只不过是原变量的一个别名而已。

指针的值可以为空，但是引用的值不能为NULL，并且引用在定义的时候必须初始化

指针的值在初始化后可以改变，即指向其它的存储单元，而引用在进行初始化后就不会再改变了，从一而终。

2.20

将i的值平方

2.21

不能用int类型的地址初始化double指针

不能用对象初始化指针

可以

2.22

p非空

p的值大于0

2.23

如果指针未被初始化，则无法判断是否合法。如果初始化后，指针的类型和对象类型一直则合法。

2.24

空指针可以存放任何类型的对象，普通指针需要匹配类型。

2.25

(a) ip是指向int的指针，i是int，r是int

(b) i是int ip是指向int的空指针

(c) ip是指向int的指针，ip2是int

2.26

(a) 不合法，const修饰的变量需要初始化

(b) 合法

(c) 合法

(d) 不合法，不能修改sz

2.27

(a) 不合法，引用不能绑定到临时值

(b) 合法

(c) 合法，可以用常量表达式初始化常量引用

(d) 合法

(e) 合法

(f) 不合法，const不能用于引用且引用需要初始化

(g) 合法

2.28

(a) cp的定义不合法，常量指针需要初始化

(b) 同a

(c) const int 需要初始化

(d) 同b

(e) 合法

2.29

(a) 合法

(b) 不合法，因为可能通过p1修改p3

(c) 同b

(d) 不合法，p3不能指向新的地址

(e) 同d

(f) ic的值不能被修改

2.30

```c++
const int v2 = 0; //底层const
int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2; //底层const;顶层const
```

2.31

```c++
r1 = v2; //合法，顶层const不受影响
p1 = p2; //不合法，底层const不匹配
p2 = p1; //合法
p1 = p3; //不合法，底层const不匹配
p2 = p3; //合法
```

2.32

不合法

```c++
int null = 0, *p = &null;
```

2.33

前三个可以，后三个不行

2.35

```c++
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;
```

j的类型是int，k的类型是const引用，p的类型是指向const int的指针，j2类型是const int，k2类型是const引用

2.36

```c++
int a = 3, b = 4;
decltype(a) c = a; //c是int，值为3
decltype((b)) d = a; //d是int& 值为3
++c; //c+1变为4
++d; //d和a都变为4
```

2.37

赋值是会产生引用的一类典型表达式

```c++
int a = 3, b = 4;
decltype(a) c = a; //c是int，值为3
decltype(a = b) d = a; //d是int&, 值为3
```

2.38

auto丢弃顶层const，需要指明const才可以补充顶层const。对指针和引用来说会保留底层const。auto顺着引用找到原始对象的类型

decltype会保留引用类型，而且会把一些指针解引用，赋值，加括号等表达式理解为引用类型，decltype还会保留顶层const

2.39

error: expected ';' after struct definition

