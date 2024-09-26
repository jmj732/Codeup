#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    vector<long long> memo(1000000000, 0);
    memo[0] = 0;memo[1] = 1;memo[2] = 2;
    cin >> n;
    for(int i = 3;i <= n; i++) {
        memo[n] = (memo[n-1] + memo[n-2]) % 1000000007; ;
    }
    cout << memo[n];
    return 0;
}