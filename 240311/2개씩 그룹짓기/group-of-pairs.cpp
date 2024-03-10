#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    vector<int> v(2 * N);
    vector<int> sum(N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i <= N - 1; i++) {
        sum[i] = v[i] + v[2 * N - 1 - i];
    }
    
    cout << *max_element(sum.begin(), sum.end());
    
    return 0;
}