#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum{0};
    vector<vector<int>> v(4, vector<int>(4, 0));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> v[i][j];
        }
    }

    for(int i=0;i<4;i++){
        sum = 0;
        for(int j=0;j<4;j++){
            sum += v[i][j];
        }
        cout << sum << '\n';
    }    
    return 0;
}