#include <iostream>
#include <algorithm>
using namespace std;

bool isSameWord(string s1, string s2){
    if(s1.size() != s2.size()) return false;
    for(int i=0;i<s1.size();i++){
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(isSameWord(s1, s2)) cout << "Yes";
    else cout << "No";
    return 0;
}