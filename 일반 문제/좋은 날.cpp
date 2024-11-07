#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

int main() {
    std::string input, year, month, day;


    std::getline(std::cin, input);
    std::istringstream ss(input);

    std::getline(ss, year, '/');
    std::getline(ss, month, '/');
    std::getline(ss, day);

    std::string month_day;
    month_day = month + day;

    std::sort(year.begin(), year.end());
    std::sort(month_day.begin(), month_day.end());

    if (year == month_day)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    return 0;
}
