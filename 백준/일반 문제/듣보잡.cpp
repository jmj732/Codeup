#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::unordered_map<std::string, int> name_map;
    std::vector<std::string> result;

    for (int i = 0; i < n + m; i++) {
        std::string name;
        std::cin >> name;

        if (++name_map[name] == 2) {
            result.push_back(name);
        }
    }

    std::sort(result.begin(), result.end());

    // 출력
    std::cout << result.size() << '\n';
    for (const auto& name : result) {
        std::cout << name << '\n';
    }

    return 0;
}
