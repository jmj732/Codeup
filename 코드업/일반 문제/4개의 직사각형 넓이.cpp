#include <iostream>
#include <vector>

class Point {
public:
    int x = 0;
    int y = 0;
};

class Square : public Point {
public:
    void setPoints() {
        std::cin >> left_top_point.x >> left_top_point.y >> right_bottom_point.x >> right_bottom_point.y;
    }
    Point get_left_Point() const {
        return left_top_point;
    }
    Point get_right_Point() const {
        return right_bottom_point;
    }
private:
    Point left_top_point;
    Point right_bottom_point;
};

int main() {
    Square square[4];
    int max_x = 0, max_y = 0;
    for (int i = 0; i < 4; i++)
        square[i].setPoints();

    for (int i = 0; i < 4; i++) {
        if (max_x < square[i].get_right_Point().x)
            max_x = square[i].get_right_Point().x;

        if (max_y < square[i].get_right_Point().y)
            max_y = square[i].get_right_Point().y;
    }
    std::vector<std::vector<int>> map(max_y, std::vector<int>(max_x, 0));
    for (int i = 0; i < 4; i++) {
        int lx = square[i].get_left_Point().x;
        int ly = square[i].get_left_Point().y;
        int rx = square[i].get_right_Point().x;
        int ry = square[i].get_right_Point().y;

        for (int y = ly; y < ry; y++) {
            for (int x = lx; x < rx; x++) {
                map[y][x] = 1;
            }
        }

    }
    int cnt = 0;
    for (int y = 0; y < max_y; y++) {
        for (int x = 0; x < max_x; x++) {
            if (map[y][x] == 1) 
                cnt += 1;
        }
    }
    std::cout << cnt;
    return 0;
}