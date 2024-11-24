#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    for (auto c = str.rbegin(); c != str.rend(); ++c)
        std::cout << *c;
    
    return 0;
}
