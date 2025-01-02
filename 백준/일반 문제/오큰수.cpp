#include <iostream>
#include <vector>
#include <stack>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    std::stack<int> st2;
    std::stack<int> st1;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int right = -1;
    for (int i = n - 1; i >= 0; i--) {
        while (!st1.empty() && st1.top() <= v[i]) {
            st1.pop();
        }
        if (!st1.empty()) right = st1.top();
        if (v[i] < right) {
            st2.push(right);
        } else {
            st2.push(-1);
        }
        st1.push(v[i]);
    }

    while (!st2.empty()) {
        std::cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}
