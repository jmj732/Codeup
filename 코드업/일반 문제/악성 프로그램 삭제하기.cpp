#include <iostream>
#include <vector>

bool malware(const std::string& str) {
    std::string word1 = "tap", word2 = "xocure";
    if (str.find(word1) != std::string::npos or str.find(word2) != std::string::npos)
        return true;
    return false;
}


int main() {
    int n;
    std::cin >> n; // n 입력 후 enter까지 버퍼에 담김
    std::cin.ignore(); // 버퍼 비워줌

    std::vector<std::string> v(n);
    for (int i = 0; i < n; i++)
        getline(std::cin,v[i]);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].length() <= 3 or malware(v[i])) {
            cnt++;
            std::cout << v[i] << std::endl;
        }
    }
    std::cout << (cnt >= 7 ? "danger" : (cnt >= 4 ? "warning" : "safe"));
    return 0;
}