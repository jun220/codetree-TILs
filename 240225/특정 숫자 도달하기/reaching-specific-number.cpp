#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int temp;
    vector<int> v;
    int sum{0}; 
    float average;
    for(int i=0;i<10;i++){
        cin >> temp;
        if(temp >= 250) {
            break;
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        sum += v[i];
    }
    average = static_cast<float>(sum) / v.size();
    cout << sum << ' ' << fixed << setprecision(1) << average;
    return 0;
}