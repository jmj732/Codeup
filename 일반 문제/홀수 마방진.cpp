#include <iostream>
#include <vector>

void magicSquare(std::vector<std::vector<int>>& v, int n) {
    int value = 0;
    int row = 0;
    int col = n / 2;

    while (value < n * n) {
        v[row][col] = ++value;

        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;

        if (value % n == 0) {
            row = (row + 1) % n;
        } else {
            row = newRow;
            col = newCol;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> v(n, std::vector<int>(n, 0));
    magicSquare(v,n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
