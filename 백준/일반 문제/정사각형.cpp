#include <iostream>
#include <cmath>
#include <algorithm>

class Point {
public:
    int x;
    int y;
};

int distance(Point p1, Point p2) {
    return pow(abs(p1.x-p2.x),2) + pow(abs(p1.y - p2.y),2);
}

bool isSquare(Point p1, Point p2, Point p3, Point p4) {
    int dist[6] = {
        distance(p1, p2),
        distance(p1, p3),
        distance(p1, p4),
        distance(p2, p3),
        distance(p2, p4),
        distance(p3, p4)
    };
    std::sort(dist, dist + 6);

    // 네 변 길이 dist[0] ~ dist[3]가 같고, 두 대각선 길이 dist[4], dist[5]가 같아야 함, 변의 제곱 * 2는 대각선 길이의 제곱과 같아야 함
    return dist[0] > 0 && dist[0] == dist[1] && dist[1] == dist[2] && dist[2] == dist[3] && dist[4] == dist[5] && dist[4] == 2 * dist[0];
}
int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        Point p1, p2, p3, p4;
        std::cin >> p1.x >> p1.y;
        std::cin >> p2.x >> p2.y;
        std::cin >> p3.x >> p3.y;
        std::cin >> p4.x >> p4.y;
        if (isSquare(p1, p2, p3, p4)) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << "0" << std::endl;
        }
    }

    return 0;
}