#include <iostream>
#include <string>
using namespace std;

string str = "";

void f(string k,int len) {
    if(k[len] == '3' || k[len] == '6' || k[len] == '9')
        str += "K";
    if(len == 0) return;

    return f(k, len-1);
}

int main() {
    string k;
    cin >> k;
    f(k,k.length());

    if(str == "")
        cout << k;
    else
        cout << str;

    return 0;
}
