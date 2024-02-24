#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    // if(n > 2)
    for(int y=0; y<n;y++){
        v[y][0] = 1;
        v[y][y] = 1;
    }
    for(int y=2;y<n;y++){
        for(int x=1;x<=y;x++){
            v[y][x] = v[y-1][x] + v[y-1][x-1];
        }
    }

    for(int y=0;y<n;y++){
        for(int x=0;x<=y;x++){
            cout << v[y][x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}