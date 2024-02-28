#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> S(n);



    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    S[0] = A[0];

    for(int i=0;i<n;i++){
        S[i] = S[i-1] + A[i];
    }


    for(int i=0;i<m;i++){
        cin >> a >> b;
        // cout << "a, b = " << a << ", " << b <<'\n';
        // cout << "S[b] - S[a-1] = " << S[b] << " - " << S[a-1] << '\n';
        cout << S[b-1] - S[a-2] << '\n';
    }




    return 0;
}