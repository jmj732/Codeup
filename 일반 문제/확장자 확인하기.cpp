#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> fileTypes;

    // 데이터 삽입
    fileTypes[".dib"] = "Paint.Picture";
    fileTypes[".doc"] = "Word.Document.8";
    fileTypes[".docx"] = "Word.Document.12";
    fileTypes[".htm"] = "htmfile";
    fileTypes[".html"] = "htmlfile";
    fileTypes[".hwp"] = "Hwp.Document.96";
    fileTypes[".hwpx"] = "Hwp.Document.hwpx.96";
    fileTypes[".hwt"] = "Hwp.Document.hwt.96";
    fileTypes[".jpe"] = "jpegfile";
    fileTypes[".jpeg"] = "jpegfile";
    fileTypes[".jpg"] = "jpegfile";
    fileTypes[".ppt"] = "PowerPoint.Show.8";
    fileTypes[".pptx"] = "PowerPoint.Show.12";
    fileTypes[".pptxml"] = "powerpointxmlfile";

    std::string str, str_type;
    std::cin >> str;
    bool flag = false;
    for(auto c : str) {
        if(flag) {
            str_type += c;
            continue;
        }
        if(c == '.') {
            str_type += '.';
            flag = true;
        }
    }
    std::cout << fileTypes[str_type];
    return 0;
}
