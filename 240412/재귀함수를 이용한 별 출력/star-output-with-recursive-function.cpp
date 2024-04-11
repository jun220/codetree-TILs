#include <iostream>
using namespace std;

void printLine(int n, int max){
    for(int i=0;i<n;i++){
        cout << '*';
    }
    cout << '\n';
    if(n == max) return;
    printLine(++n, max);
    
}

int main() {
    int n;
    cin >> n;
    printLine(1, n);    
    return 0;
}