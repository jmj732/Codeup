export module book;

import <string>;
import <vector>;

export struct Category {
	static const unsigned int NOVEL = 0;
	static const unsigned int SF = 1;
	static const unsigned int SCIENCE = 2;
	static const unsigned int ART = 3;
	static const unsigned int HUMANITES = 4;
	static const unsigned int MAGAZINE = 5;
	static const std::vector<std::wstring> CATEGORY;

	friend class Book;
private:
	unsigned int value;
};

export class Book {
private:
	std::wstring _title; // wchar_t 2바이트 문자
	std::wstring _author;
	std::wstring _publisher;
	Category _category;
	double _price;
public:
	Book(const std::wstring& title, const std::wstring& author, const std::wstring& publisher, unsigned int category, double price);

	void title(const std::wstring&);
	void author(const std::wstring&);
	void publisher(const std::wstring&);
	void category(unsigned int);
	void price(double);

	std::wstring title() const;
	std::wstring author() const;
	std::wstring publisher() const;
	unsigned int category() const;
	double price() const;
	std::wstring info() const;
};