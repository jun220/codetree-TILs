#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin >> words[i];
    }
    sort(words.begin(), words.end());
    
    for(int i=0; i<words.size(); i++){
        cout << words[i] << '\n';
    }
    return 0;
}