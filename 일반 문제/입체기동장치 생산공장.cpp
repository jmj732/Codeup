#include <iostream>
#include <vector>
#include <algorithm>

class machine {
    public:
    int id;
    int amount;
};
bool cmp(machine a, machine b){
    return a.id < b.id;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<machine> machines(n);
    for (int i = 0; i < n; i++) {
        std::cin >> machines[i].id >> machines[i].amount;
    }
    std::sort(machines.begin(), machines.end(),cmp);
    for (int i = 0; i < n; i++) {
        std::cout << machines[i].id << " " << machines[i].amount << std::endl;
    }
    return 0;
}
