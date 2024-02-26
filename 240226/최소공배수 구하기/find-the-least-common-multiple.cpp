#include <iostream>
using namespace std;

int lcm(int a, int b){
    int result;
    for(int i=1;i<=a;i++){
        if(a%i == 0 && b%i == 0){
            result = i;
        }
    }
    return a*b/result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << lcm(n, m);
    return 0;
}