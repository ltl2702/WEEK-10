#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
    void Nhap()
    {
        cout << "Nhap vao toa do x va y: ";
        cin >> this->x >> this->y;
    }
};

void PrintByValue(Point p) //truyền tham trị (khác địa chỉ)
{
    cout << "Dia chi cua bien trong ham PrintByValue: " << &p << endl;
    cout << "(" << p.x << "," << p.y << ")" <<endl;
}

void PrintByReference(Point &p) //truyền tham chiếu (trùng địa chỉ)
{
    cout << "Dia chi cua bien trong ham PrintByReference: " << &p << endl;
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    Point p;
    p.Nhap();
    cout << "Dia chi cua bien trong ham main: " << &p << endl;
    PrintByValue(p);
    PrintByReference(p);
    return 0;
}

