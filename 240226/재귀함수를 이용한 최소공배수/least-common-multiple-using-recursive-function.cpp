#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int temp, result;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    temp = v[0];
    for(int i=1;i<n;i++){
        result = lcm(temp, v[i]);
        //cout << result << '\n';
        temp = result;
    }
    cout << result;
    return 0;
}