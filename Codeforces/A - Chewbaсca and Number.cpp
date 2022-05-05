#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] > '4') str[i] = '0' + '9' - str[i];
    }
    if(str[0] == '0') str[0] = '9';
    cout << str << "\n";
    return 0;
}
