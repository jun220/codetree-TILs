#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> v(n, 0);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=0;i<n;i++){
        cout << v[i] << ' ';
    }
    cout << '\n';

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++){
        cout << v[i] << ' ';
    }
      
    return 0;
}