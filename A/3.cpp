#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
};

void Nhap(Point& p)
{
    cout << "Nhap toa do: ";
    cin >> p.x >> p.y;
}

Point mid_point(const Point& a,const Point& b)
{
    Point c;
    c.x = (a.x + b.x)/2;
    c.y = (a.y + b.y)/2;
    cout << "Trung diem: ";
    return c;

}
void Print(Point a)
{
    cout << "(" << a.x << "," << a.y << ")";
}

int main()
{
    Point a;
    Point b;
    Nhap(a);
    Nhap(b);
    Point c = mid_point(a,b);
    Print(c);
}
