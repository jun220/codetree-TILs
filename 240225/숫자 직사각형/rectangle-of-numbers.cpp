#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, count{1};
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v[i][j] = count++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}