#include <iostream>
using namespace std;

int cal(int n) {
    if (n < 10) {
        if (n % 2 == 0) return 0;
        else return n;
    }
    int sum{ 0 };
    int temp = n % 10;
    if (temp % 2 != 0) {
        sum += temp;
    }

    sum += cal(n / 10);
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << cal(n);
    return 0;
}