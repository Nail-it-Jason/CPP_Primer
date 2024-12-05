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