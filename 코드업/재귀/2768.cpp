#include <iostream>
#include <vector>

using namespace std;
using uint64 = unsigned long long ;

int main() {
    int k,n;
    cin >> k >> n;
    vector<int> memo(n, 0);
    for(int i = 0; i < k; i++){
        cin >> memo[i];
    }
    uint64 result = 0;
    for (int i = k; i < n; i++) {
        result = 0;
        for(int j = 1; j <= k; j++){
            result += memo[i - j] % 100007; 
        }
        memo[i] = result % 100007;
    }
    
    cout << memo[n - 1] << endl;
    return 0;
}
