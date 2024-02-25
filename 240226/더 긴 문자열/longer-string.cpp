#include <iostream>
using namespace std;

int main() {
    string str1, str2, longstr;
    cin >> str1 >> str2;
    if(str1.length() == str2.length()){
        cout << "same";
    }
    else{
        longstr = (str1.length() > str2.length()) ? str1 : str2;
        cout << longstr << ' ' << longstr.length();
    }
    return 0;
}