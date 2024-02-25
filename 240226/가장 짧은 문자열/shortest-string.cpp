#include <iostream>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    string min{str1}, max{str1};
    if(str2.length() > max.length()){
        max = str2;
    }
    if(str3.length() > max.length()){
        max = str3;
    }
    if(str2.length() < min.length()){
        min = str2;
    }
    if(str3.length() < min.length()){
        min = str3;
    }
    cout << max.length() - min.length();
    return 0;
}