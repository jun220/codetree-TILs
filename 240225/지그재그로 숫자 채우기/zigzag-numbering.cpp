#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int num=0;
    vector<vector<int>>v(n, vector<int>(m));

    for(int j=0; j<m;j++){
        if(j%2 == 0){
            for(int i=0;i<n;i++){
                v[j][i] = num++;
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                v[j][i] = num++;
            }
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}