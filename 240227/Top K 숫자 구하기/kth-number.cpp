#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> v(N, 0);
    
    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    cout << v[k-1];
    
    return 0;
}