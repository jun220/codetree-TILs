#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void print(vector<int> &v, int n){
//     sort(v.begin(), v.end());
//     for(int i=0;i<n;i++){
//         cout << v[i] << ' ';
//     }
//     cout << '\n';
// }

int mid(vector<int> v, int num){
    sort(v.begin(), v.end());
    //print(v, num);
    //cout << "index : " << num/2 << '\n';
    return v[num/2];
}



int main() {
    int n;
    cin >> n;
    vector<int> v(n, 200);

    for(int i=0;i<n;i++){
        cin >> v[i];
        //print(v, i);

        if(i % 2 == 0){
            cout << mid(v, i+1) << ' ';
        }
    }

    return 0;
}