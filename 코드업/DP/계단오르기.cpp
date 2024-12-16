#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> v(n + 1);
    for(int i = 1; i <= n; i++)
        std::cin >> v[i];
    std::vector<int> DP(n + 1, 0);

    DP[1] = v[1];
    DP[2] = v[1] + v[2];
    DP[3] = std::max(v[1] + v[3], v[2] + v[3]);

    for(int i = 4; i <= n; i++) {
        DP[i] = std::max(DP[i-2] + v[i],DP[i-3] + v[i-1] + v[i]);
    }
    std::cout << DP[n];

    return 0;
}