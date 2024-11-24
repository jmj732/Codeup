#include <iostream>
class Point {
public:
    int x;
    int y;
};

int main()
{
    Point p1,p2;
    std::cin >> p1.x >> p1.y;
    std::cin >> p2.x >> p2.y;
    Point d;
    std::cin >> d.x >> d.y;
    if ( (d.x >= p1.x && d.x <= p2.x) and (d.y >= p1.y && d.y <= p2.y) )
        std::cout << "충돌";
    else std::cout << "비충돌";
    return 0;
}
