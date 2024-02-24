#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    float sum;
    vector<vector<int>> v(2, vector<int>(4, 0));
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> v[i][j];
        }
    }

    for(int i=0;i<2;i++){
        sum = 0.0;
        for(int j=0;j<4;j++){
            sum += v[i][j];
        }
        cout << fixed << setprecision(1) << sum / 4 << ' ';
    }

    cout << '\n';

    for(int j=0;j<4;j++){
        sum = 0.0;
        for(int i=0;i<2;i++){
            sum += v[i][j];
        }
        cout << fixed << setprecision(1) << sum / 2 << ' ';
    }

    cout << '\n';
    sum = 0.0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            sum += v[i][j];
        }
    }
    cout << fixed << setprecision(1) << sum / 8 << ' ';
    return 0;
}