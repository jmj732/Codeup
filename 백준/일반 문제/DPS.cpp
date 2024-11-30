#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    vector<long long> dp(r + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = min(i, r); j > 0; j--) {
            dp[j] += dp[j - 1];
        }
    }

    return dp[r];
}

int main() {
    std::string teamName;
    std::cin >> teamName;

    std::unordered_map<char, int> teamNameCount;
    for (char c : teamName)
        teamNameCount[c]++;

    long long n;
    std::cin >> n;

    std::unordered_map<char, int> handlerCount;
    for (long long i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        if (teamNameCount.find(s[0]) != teamNameCount.end()) {
            handlerCount[s[0]]++;
        }
    }

    long long result = 1;
    for (auto& entry : teamNameCount) {
        char c = entry.first;
        int teamCount = entry.second;

        if (handlerCount[c] < teamCount) {
            result = 0;
            break;
        }
        result *= nCr(handlerCount[c], teamCount);
    }
    std::cout << result << std::endl;

    return 0;
}
