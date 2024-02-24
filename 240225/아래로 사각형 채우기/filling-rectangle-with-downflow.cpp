#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    int num=1;
    vector<vector<int>>v(n, vector<int>(n));

    for(int j=0; j<n;j++){
        for(int i=0;i<n;i++){
            v[i][j] = num++;
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}