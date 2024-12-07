#### 3练习

3.2

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1;
    while(getline(cin, s1))
        cout << s1;
    return 0;
}
```

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1;
    while(cin >> s1)
        cout << s1 << endl;
    return 0;
}
```

3.3

string遇到空白停止读入，getline直到换行符才停止

3.4

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1, s2;
    while(cin >> s1 >> s2)
        cout << (s1 == s2 ? ("equal") : (s1 > s2 ? s1 : s2)) << endl;
    return 0;
}
```

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1, s2;
    while(cin >> s1 >> s2)
        cout << (s1.size() == s2.size() ? ("equal") : (s1.size() > s2.size() ? s1 : s2)) << endl;
    return 0;
}
```

3.5

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1, s2;
    while(cin >> s1) {
        s2 += s1;
        cout << s2 << endl;
    }
    return 0;
}
```

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s1, s2;
    while(cin >> s1) {
        s2 += s1;
        s2 += ' ';
        cout << s2 << endl;
    }
    return 0;
}
```

3.6

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s("some string");
    for(auto &c: s)
        c = 'X';
    cout << s << endl;
    return 0;
}
```

3.7 不发生变化

3.8 for更好，可以明确循环执行的次数

3.9 不合法，空字符不包含合法下标，访问不合法下标会造成不可预知的结果

3.10

```c++
#include <iostream>
#include <string>

using namespace::std;

int main() {
    string s("some,st,,ri,ng,,");
    string s0;
    for(decltype(s.size()) index = 0; index != s.size(); ++index){
        if(!ispunct(s[index])){
            s0 += (s[index]);
        }
    }
    s = s0;
    cout << s << endl;
    return 0;
}
```