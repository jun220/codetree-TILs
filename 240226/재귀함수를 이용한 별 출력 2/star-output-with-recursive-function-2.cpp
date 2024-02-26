#include <iostream>
using namespace std;
int n;


void starminus(int num){
        for(int i=0;i<num;i++){
        cout << '*' << ' ';
    }
    cout << '\n';
    if(num < n) starminus(++num);
}

void starplus(int num){
    for(int i=0;i<num;i++){
        cout << '*' << ' ';
    }
    cout << '\n';
    if(num > 1) starplus(--num);
    else starminus(num);
}



int main() {
    cin >> n;
    starplus(n);
    return 0;
}