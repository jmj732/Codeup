#include <iostream>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    std::vector<int> v0(10000, 0);
    std::vector<int> v1(10000, 0);
    for (int i = 1; i <= n; i++) {
        int a;
        std::cin >> a;
        v0[0] = 1, v0[1] = 0, v0[2] = 1;
        v1[0] = 0; v1[1] = 1, v1[2] = 1;

        for (int j = 3; j <= a; j++) {
            v0[j] = v0[j - 1] + v0[j - 2];
            v1[j] = v1[j - 1] + v1[j - 2];
        }
        std::cout << v0[a] << " " << v1[a]<< std::endl;
    }


    return 0;
}
