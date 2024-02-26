#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    for(int i=0;i<str.length();i++){
        cout << str[i];
    }
    return 0;
}