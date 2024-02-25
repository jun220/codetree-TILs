#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<int>> v(n+1, vector<int>(n+1, 0));

    for(int i=0;i<m;i++){
        cin >> x >> y;
        v[x][y] = x*y;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}