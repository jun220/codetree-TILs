#include <iostream>
#include <vector>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int Y, M, D;
    vector<int> maxDaysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(Y)) {
        maxDaysInMonth[2] = 29;
    }
    if(D > maxDaysInMonth[M]){
        cout << -1;
    }
    else{
        if(M > 11 || M < 3){
            cout << "Winter";
        }
        else if(M > 8) cout << "Fall";
        else if(M > 5) cout << "Summer";
        else if(M > 2) cout << "Spring";
    }
    return 0;
}