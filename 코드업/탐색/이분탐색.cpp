#include <iostream>
#include <vector>

int main(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    int result = -1;
    int a;
    for(int i=0;i<n;i++) {
        std::cin >> a;
        if (a == k) {
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }
    std::cout << result << std::endl;
    return 0;
}