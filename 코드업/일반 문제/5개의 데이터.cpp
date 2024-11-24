#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int n;

    for (int i = 0; i < 5; i++) {
        cin >> n;
        st.push(n);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}