#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, x{0}, y{0}, start_x{0}, start_y{0};
    cin >> n >> m;
    int num = 1;
    vector<vector<int>>v(n, vector<int>(m, 0));

    while (num <= m * n) {
        x = start_x;
        y = start_y;

        while (x >= 0 && y < n) {
            v[y][x] = num++;
            x--;
            y++;
        }
        if (start_x + 1 < m) {
            start_x++;
        }
        else {
            start_y += 1;
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}