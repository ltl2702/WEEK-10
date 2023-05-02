#include<bits/stdc++.h>
#include<cstring>
using namespace std;

struct String {
    int n; // độ dài xâu
    char* str; // con trỏ đến mảng kí tự

    // constructor
    String(const char* s = "") {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    // destructor
    ~String() {
        delete[] str;
    }

    // in nội dung xâu
    void print() const {
        std::cout << str << std::endl;
    }

    // nối xâu
    void append(const char* s) {
        int m = strlen(s);
        char* temp = new char[n + m + 1];
        strcpy(temp, str); //sao chep toan bo chuoi tu str sang temp
        strcat(temp, s);  //noi 2 chuoi
        delete[] str;
        str = temp;
        n += m;
    }
};

int main()
{
    String greeting("Hi");
    greeting.print(); //in ra Hi
    greeting.append(" there");
    greeting.print(); // in ra "Hi there"
    return 0;
}
