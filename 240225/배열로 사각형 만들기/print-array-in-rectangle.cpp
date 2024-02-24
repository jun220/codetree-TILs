#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<vector<int>> v(5, vector<int>(5, 1));
    for(int y=1;y<5;y++){
        for(int x=1;x<5;x++){
            v[y][x] = v[y-1][x] + v[y][x-1];
        }
    }

    for(int y=0;y<5;y++){
        for(int x=0;x<5;x++){
            cout << v[y][x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}