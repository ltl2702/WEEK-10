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



 void Print(Point p)
    {
     cout << "("<<p.x << "," << p.y << ")";
    }

int main()
{
    Point p;
    p.Nhap();
    Print(p);
}
