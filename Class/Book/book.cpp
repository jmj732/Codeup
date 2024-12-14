module;

module book;

import <vector>;
import <string>;
import <format>;

const std::vector<std::wstring> Category::CATEGORY{
	L"소설",L"공상과학",L"과학",L"예술",L"인문",L"잡지"
};


Book::Book(const std::wstring& title, const std::wstring& author, const std::wstring& publisher, unsigned int category, double price)
	:_title(title), _author(author), _publisher(publisher), _category(category), _price(price) {}


std::wstring Book::title() const {
	return _title;
}

std::wstring Book::author() const {
	return _author;
}

std::wstring Book::publisher() const {
	return _publisher;
}

unsigned int Book::category() const {
	return _category.value;
}

double Book::price() const {
	return _price;
}

void Book::title(const std::wstring& title) {
	if (!title.length())
		_title = title;
}
void Book::author(const std::wstring& author) {
	if (!author.length())
		_author = author;
}
void Book::publisher(const std::wstring& publisher) {
	if (!publisher.length())
		_publisher = publisher;
}
void Book::category(unsigned int category) {
	_category.value = category;
}
void Book::price(double price) {
	if (price > 0)
		_price = price;
}

std::wstring Book::info() {
	return std::format(L"제목: {}\n저자: {}\n출판사: {}\n분류: {}\n,가격: {}\n", _title, _author, _publisher, Category::CATEGORY[_category.value], _price);
}