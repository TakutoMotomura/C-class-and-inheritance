#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    public:
        int x;
        int y;
        bool operator==( Point obj );
        bool operator>( Point obj );
};

bool Point::operator==( Point obj )
{
    if(( this->x == obj.x ) && ( this->y == obj.y ))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Point::operator>( Point obj )
{
    double v1, v2;
    v1 = sqrt( this->x * this->x + this->y * this->y );
    v2 = sqrt( obj.x * obj.x + obj.y * obj.y );

    if( v1 > v2 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Point a, b;

    a.x = 1;
    a.y = 2;
    b.x = 3;
    b.y = 4;

    if( a == b )
    {
        cout << "a��b�͓�����\n";
    }
    else
    {
        cout << "a��b�͓������Ȃ�\n";
    }

    if( a > b )
    {
        cout << "a��b���傫��\n";
    }
    else
    {
        cout << "a��b���傫���Ȃ�\n";
    }

    return 0;
}