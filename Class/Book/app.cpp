import book;

#include <iostream>
#include <locale>

int main() {

	setlocale(LC_ALL, "");
	Book book1(L"ȫ�浿��", L"���", L"������", Category::NOVEL, 3400);

	std::wcout << book1.info();

	return 0;
}