#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 1));

    for(int y=1;y<n;y++){
        for(int x=1;x<n;x++){
            v[y][x] = v[y-1][x] + v[y-1][x-1] + v[y][x-1];
        }
    }

    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            cout << v[y][x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}