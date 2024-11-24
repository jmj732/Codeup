#include <iostream>
#include <unordered_map>
std::string hex_to_bin(std::string hex) {
    std::string bin;
    std::unordered_map<int, std::string> bin_digits = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"}
    };

    int i = 0;
    while(i < hex.size()) {
        int n = hex[i];
        bin += bin_digits[n];
        bin += " ";
        i++;
    }

    return bin;
}

int main() {
    std::string hex_num;

    std::cin >> std::hex >> hex_num;
    std::cout << hex_to_bin(hex_num) << '\n';

    return 0;
}
