#### 2.1节练习

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