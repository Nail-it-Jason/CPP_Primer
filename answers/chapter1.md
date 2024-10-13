#### 1.2节练习

1.3

```c++
#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;
    return 0;
}
```

1.4

```c++
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
    return 0;
}
```

1.5

```c++
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
    return 0;
}
```

1.6

不合法，因为第一行语句已经用分号结束了，第二行的<<运算符没有左操作数。

#### 1.3节练习

1.7

main.cpp:3:15: error: '涓嶈兘宓屽' does not name a type
    3 |  * 娉ㄩ噴瀵�/* */涓嶈兘宓屽
      |               ^~~~~~~~
ninja: build stopped: subcommand failed.

1.8

```c++
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

第三句有问题，其他的没问题

#### 1.4.1节练习

1.9

```c++
#include <iostream>

int main() {
    int sum = 0, val = 50;
    while(val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
    << sum << std::endl;
    return 0;
}
```

1.10

```c++
#include <iostream>

int main() {
    int val = 10;
    while(val >= 0) {
        std::cout << "val = " << val << std::endl;
        --val;
    }

    return 0;
}
```

1.11

```c++
#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cout << "enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    int tmp = v1;
    while (tmp <= v2){
        std::cout << tmp <<std::endl;
        ++tmp;
    }
    return 0;
}
```

#### 1.4.2节练习

1.12

从-100加到100，结果为0

1.13

```c++
#include <iostream>

int main() {
    int sum = 0, val = 50;
    for(int val = 50; val <= 100; ++val) {
        sum += val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}
```

1.14

for循环用于已知初始值、终止情况和步长，while循环用于只知道终止条件的情况。for循环一般可以结束，while循环可以无限循环

#### 1.4.3节练习

1.16

```c++
#include <iostream>

int main() {
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
```