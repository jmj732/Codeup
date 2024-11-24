#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10,0);
    for (int i = 0; i < 10; i++)
        cin >> v[i];

    float avg = 0;
    for (int i = 0; i < 10; i++)
        avg += v[i];
    avg /= 10;

    int under = 0, over = 0;
    for (int i = 0; i < 10; i++)
        if (v[i] >= avg)
            over++;
        else
            under++;
    printf("%.1f\n",avg);
    cout << over << " " << under << endl;
    return 0;
}