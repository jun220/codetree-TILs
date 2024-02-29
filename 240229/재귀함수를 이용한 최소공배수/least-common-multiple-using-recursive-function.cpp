#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*b / gcd(a,b);
}

int main() {
    int n, a, result{1};
    cin >> n;
    for(int i=0;i<n;i++){
        //cout << i << "번째 시도\n";
        cin >> a;
        result = lcm(result, a);
        //cout << result;
    }
    cout << result;
    
    return 0;
}