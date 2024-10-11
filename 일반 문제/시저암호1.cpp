#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if(str[i] != ' ') {
            str[i] = 'a' + (str[i] - 'a' - 3 + 26) % 26;
        }
    }

    cout << str << endl;
    return 0;
}