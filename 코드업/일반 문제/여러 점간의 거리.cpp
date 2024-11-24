#include <iostream>
#include <vector>
#include <math.h>

double sqaure(int a) {
    return a * a;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::pair<int,int>> v(n, {0, 0});
    for (int i = 0; i < n; i++) {
        std::cin >> v[i].first >> v[i].second;
    }

    double result = 0;
    for (int i = 1; i < n; i++) {
        result += sqrt(sqaure(v[i - 1].first - v[i].first) + sqaure(v[i - 1].second - v[i].second));
    }
    printf("%.2f\n", result);
    return 0;
}

