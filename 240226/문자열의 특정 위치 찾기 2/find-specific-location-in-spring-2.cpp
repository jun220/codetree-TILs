#include <iostream>
#include <vector>
using namespace std;

bool findLetter(string str, char c){
    if(str[2] == c || str[3] == c) return true;
    return false;
}

int main() {
    int count{0};
    char c;
    cin >> c;
    vector<string> v = {"apple", "banana", "grape", "blueberry", "orange"};
    
    for(int i=0;i<v.size(); i++){
        if(findLetter(v[i], c)){
            count++;
            cout << v[i] << '\n';
        }
    }
    cout << count;
    return 0;
}