#include <iostream>
#include <vector>

using namespace std;
using uint64 = unsigned long long ;

int main() {
    int k,n;
    vector<int> memo(100, 0);
    cin >> k >> n;
    for(int i = 0; i < k; i++){
        cin >> memo[i];
    }
    int result = 0;
    for (int i = k; i < n; i++) {
        result = 0;
        for(int j = 1; j <= k; j++){
            result += memo[i - j]; 
        }
        memo[i] = result;
    }
    
    cout << memo[n - 1] << endl;
    return 0;
}
