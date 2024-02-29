#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    vector<int> numbers(n);

    for(int i = 0; i < n; ++i) {
        cin >> numbers[i];

        if(i % 2 == 0) {
            max_heap.push(numbers[i]);
            if(min_heap.empty() || max_heap.top() > min_heap.top()) {
                min_heap.push(max_heap.top());
                max_heap.pop();
            }
            cout << min_heap.top() << " ";
        }
    }

    return 0;
}