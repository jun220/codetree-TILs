#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num{1};
    bool flag{true}; //위로 이동
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for(int x=n-1; x>=0; x--){
        if(flag){
            for(int y=n-1; y>=0; y--){
                v[y][x] = num;
                num++;
            }
        }
        else{
            for(int y=0; y<n; y++){
                v[y][x] = num;
                num++;
            }
        }
        flag = !flag;
    }

    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            cout << v[y][x] << ' ';
        }
        cout << '\n';
    }

    return 0;
}