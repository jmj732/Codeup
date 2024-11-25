#include <iostream>
#include <vector>
#include <queue>

using vec = std::vector<int>;
using gre = std::greater<int>;

int main() {
    int n;
    std::cin >> n;

    std::vector<std::priority_queue<int, vec, gre>> minHeap(n);

    int m, input;
    for (int i = 0; i < n; i++) {
        std::cin >> m;
        for (int j = 0; j < m; j++) {
            std::cin >> input;
            minHeap[i].push(input);
        }
    }

    for (int i = 0; i < n; i++) {
        int result = 0;

        while (minHeap[i].size() > 1) {
            int x = minHeap[i].top(); minHeap[i].pop();
            int y = minHeap[i].top(); minHeap[i].pop();
            int mergeCost = x + y;

            result += mergeCost;
            minHeap[i].push(mergeCost);
        }
        std::cout << result << std::endl;
    }

    return 0;
}
