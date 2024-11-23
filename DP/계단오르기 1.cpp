#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> DP(n + 1, 0);
    DP[1] = 1; DP[2] = 2;
    for(int i = 3; i <= n; i++)
        DP[i] = DP[i - 1] + DP[i - 2];
    
    std::cout << DP[n] << std::endl;
    return 0;
}