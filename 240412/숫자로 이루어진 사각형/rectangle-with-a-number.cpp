#include <iostream>
using namespace std;

void printSquare(int n){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << temp + 1 << ' ';
            temp++;
            temp %= 9;
        }
        cout << '\n';
    }
}


int main() {
    int n;
    cin >> n;
    printSquare(n);
    return 0;
}