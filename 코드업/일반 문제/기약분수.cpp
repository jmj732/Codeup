#include <iostream>

int main()
{
    int s, m;
    std::cin >> s >> m;
    int i = 2;
    while(i <= s) {
        if(s % i == 0 and m % i == 0) {
            m = m / i;
            s = s / i;
            i -= 1;
        }
        i++;
    }

    std::cout << s << " " << m << std::endl;
    return 0;
}