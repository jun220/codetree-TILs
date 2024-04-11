#include <iostream>
using namespace std;

int cal(int n) {
    if (n < 10) return n * n;
    int sum{ 0 };
    int temp = n % 10;
    sum += temp * temp;
    sum += cal(n / 10);
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << cal(n);
    return 0;
}