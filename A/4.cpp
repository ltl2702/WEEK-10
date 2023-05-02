#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p;
    cout << "Address of p: " << &p << endl;
    cout << "Address of p.x: " << &(p.x) << endl;
    cout << "Address of p.y: " << &(p.y) << endl;
    return 0;
}
/*
Address of p:   0x6ffe10
Address of p.x: 0x6ffe10
Address of p.y: 0x6ffe14

Trường x có địa chỉ trùng với địa chỉ của biến p,
trong khi đó trường y có địa chỉ khác với địa chỉ của biến p.
Điều này cho thấy rằng các trường của biến Point được
lưu trữ liên tiếp nhau trong bộ nhớ, và có địa chỉ tăng dần
theo thứ tự khai báo của chúng.
*/
