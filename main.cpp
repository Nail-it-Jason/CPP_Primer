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
