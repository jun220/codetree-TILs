#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check(vector<int> v1, vector<int> v2){
    for(int i=0;i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
    for(int i=0;i<n;i++){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    

    if(check(v1, v2)) cout << "Yes";
    else cout << "No";
    return 0;
}