#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(30001, 0);

int div(int n) {
    if (n == 0) return 1;
    if (memo[n] != 0) return memo[n];

    return memo[n] = (n + div(n - 1)) % 137;
}

int main() {
    int n;
    cin >> n;
    printf("%d\n", div(n));
    return 0;
}
