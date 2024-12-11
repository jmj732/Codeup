#include <iostream>
#include <stack>

int precedence(char c) {
    if(c == '+' || c =='-') return 1;
    if(c == '*' || c == '/') return 2;
    return 0;
}

std::string postFixes(std::string input)
{
    std::stack<char> stack;
    std::string result = "";
    for (auto c : input) {
        if (c >= 'A' && c <= 'Z') {
            result += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (stack.top() != '(') {
                result += stack.top();
                stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.empty() && precedence(stack.top()) >= precedence(c)) {
                result += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while (!stack.empty()) {
        result += stack.top();
        stack.pop();
    }

    return result;
}


int main() {
    std::string expr;
    std::cin >> expr;
    std::string result = postFixes(expr);
    std::cout << result << std::endl;
    return 0;
}