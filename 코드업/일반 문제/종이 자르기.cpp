#include <iostream>

int main()
{
    int w, h;
    std::cin >> h >> w;
    for (int i = 0; i < w; i++,puts("")) {
        for (int j = 0; j < h; j++){
            if(i == 0 or i == w-1) {
                if(j == 0 or j == h-1)
                    std::cout  << "+";
                else
                    std::cout  << "-";
            }
            else if (j == 0 or j == h-1)
                std::cout << "|";
            else
                std::cout << " ";
        }
    }


    return 0;
}

