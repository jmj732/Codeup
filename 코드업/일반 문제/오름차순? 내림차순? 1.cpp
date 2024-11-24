#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    bool asc = true ,desc = true;
    std::vector<int> nums(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> nums[i];
    }
    for (int i = 2; i <= n; i++) {
        if (nums[i] > nums[i - 1]) {
            asc = false;
        }
        if (nums[i] < nums[i - 1]) {
            desc = false;
        }
    }
    if (asc) {
        std::cout << "내림차순";
    } else if (desc) {
        std::cout << "오름차순";
    } else {
        std::cout << "섞임";
    }

    return 0;
}
