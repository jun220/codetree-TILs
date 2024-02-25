#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i=0;i<m;i++){
        cin >> x >> y;
        v[x-1][y-1] = i+1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}