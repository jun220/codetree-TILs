#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(n, 0));

    for(int i=0;i<m;i++){
        cin >> x >> y;
        //cout << "(" << x-1 << "," << y-1 << ") = 1\n";
        v[x-1][y-1] = 1;
    }

    for(int y=0;y<n; y++){
        for(int x=0;x<n;x++){
            //cout << "(" << i << "," << j << ") = " << v[i][j] << '\n';
            cout << v[y][x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}