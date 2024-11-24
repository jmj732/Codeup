#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0;
    while(i < n) {
        cout << v[i] << " ";
        if((i + 1 ) % k == 0)
            cout << endl;
        i++;
    }


    return 0;
}
