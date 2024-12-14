import book;

#include <iostream>
#include <locale>

int main() {

	setlocale(LC_ALL, "");
	Book book1(L"È«±æµ¿Àü", L"Çã±Õ", L"³«µ¿°­", Category::NOVEL, 3400);

	std::wcout << book1.info();

	return 0;
}