#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    char k;
    cin >> n >> m >> k;
    int count = 0;
    for (int i = n; i <= m; i++) {
        string num = to_string(i);
        count += std::count(num.begin(), num.end(), k);
    }
    cout << count << endl;
    return 0;
}
