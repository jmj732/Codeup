#include <iostream>
#include <vector>
#include <string>   // std::string, std::getline

int findIndex(const std::vector<char>& vec, char value) {
    auto it = std::find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        return std::distance(vec.begin(), it);
    }
    else return -1;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cin.ignore();
    std::string form;
    std::getline(std::cin, form);

    std::vector<char> v(11);
    for (int i = 0; i < 10; i++)
        v.at(i) = str.at(i);

    for (auto c : form) {
        int index = findIndex(v, c);
        if (index != -1) {
            std::cout << index;
        }
        else {
            std::cout << " ";
        }
    }

    return 0;
}
