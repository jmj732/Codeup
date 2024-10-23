#include <iostream>
#include <vector>
#include <cmath>

class Point {
public:
    float x;
    float y;
};

int main() {
    Point p1, p2;
    std::cin >> p1.x >> p1.y;
    std::cin >> p2.x >> p2.y;
    printf("%.2lf",sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
    return 0;
}
