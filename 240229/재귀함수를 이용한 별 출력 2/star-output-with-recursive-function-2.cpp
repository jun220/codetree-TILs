#include <iostream>
using namespace std;

void printStar(int a){
    if(a == 0) return;
    for(int i=0; i<a;i++){
        cout << '*' << ' ';
    }
    cout << '\n';

    printStar(a-1);

    for(int i=0; i<a;i++){
        cout << '*' << ' ';
    }
    cout << '\n';

}

int main() {
    int n;
    cin >> n;
    printStar(n);
    return 0;
}