#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int sum(int a, int b){
    int result{0};
    for(int i=a-1; i<b; i++){
        result += v[i];
    }
    return result;
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    v = vector<int>(n, 0);
    //vector<vector<int>> num(m, vector<int>(m));
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << sum(a, b) << '\n';
    }
    return 0;
}