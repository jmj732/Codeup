#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> questions(n);
    for (int i = 0; i < n; i++) {
        std::cin >> questions.at(i);
    }

    int m, asize = 0;
    std::cin >> m;
    std::vector<int> answers(m);

    for (int i = 0; i < m; i++) {
        std::cin >> answers.at(i);
        if (answers.at(i) > asize) asize = answers.at(i);
    }

    std::vector<bool> questions_bool(asize + 1, false);
    for (int question : questions) {
        if (question <= asize)
            questions_bool.at(question) = true;
    }



    for (int i = 0; i < m; i++) {
        if (questions_bool.at(answers.at(i)))
            std::cout << "1 ";
        else std::cout << "0 ";
    }

    return 0;
}
