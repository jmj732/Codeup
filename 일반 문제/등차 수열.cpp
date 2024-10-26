#include <iostream>

int main()
{
    int first, second, max;
    std::cin >> first >> second >> max;
    int diff = second - first;
    int out = second;

    if(first <= max)  std::cout << first << " ";
    if(second <= max) std::cout << second << " ";
    
    while(out+diff <= max) {
        out += diff;
        std::cout << out << " ";
    }

    return 0;
}
