#include <iostream>
using namespace std;

void cal(int n, int count) {
    if (n == 1) {
        cout << count;
        return;
    }
    int result = n;
    if (n % 2 == 0) {
        n /= 2;
    }
    else {
        n /= 3;
    }
    count++;
    cal(n, count);
}

int main() {
    int count{ 0 };
    int n;
    cin >> n;
    cal(n, count);
    return 0;
}