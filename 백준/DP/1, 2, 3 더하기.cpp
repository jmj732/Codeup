#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++)
        std::cin >> v[i];
    int max = *std::max_element(v.begin(), v.end()); // 반환타입이 이터레이터나 주소이기에 값을 얻기 위해 *연산자를 붙인다.
    std::vector<int> DP(max + 1, 0);
    DP[1] = 1; DP[2] = 2; DP[3] = 4;
    for(int i = 4; i <= max; i++) {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    for(int i = 0; i < n; i++) {
        std::cout << DP[v[i]] << std::endl;
    }

    return 0;
}