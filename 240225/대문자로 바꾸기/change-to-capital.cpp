#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int sum{0};
    vector<vector<int>> v(5, vector<int>(3, 0));
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin >> v[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << toupper(v[i][j]);
        }
        cout << sum << '\n';
    }    
    return 0;
}