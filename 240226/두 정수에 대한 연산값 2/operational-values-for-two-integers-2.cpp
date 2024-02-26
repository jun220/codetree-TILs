#include <iostream>

using namespace std;
int main() {
    int a, b, max;
    cin >> a >> b;

    if(a>b){
        a *= 2;
        b += 10;
    }
    else{
        a += 10;
        b *= 2;
    }
    
    cout << a << ' ' << b;
    return 0;
}