#include <iostream>
using namespace std;

class YourClass;

class MyClass
{
    private:
        int val;
        friend void compObj( MyClass *m, YourClass *y );
    public:
        MyClass()
        {
            val = 0;
        }
        MyClass( int v )
        {
            val = v;
        }
};

class YourClass
{
    private:
        int num;
        friend void compObj( MyClass *m, YourClass *y );
    public:
        YourClass()
        {
            num = 0;
        }
        YourClass( int n)
        {
            num = n;
        }
};

void compObj( MyClass *m, YourClass *y )
{
    if( m->val > y->num )
    {
        cout << "val��num���傫��\n";
    }
    else if( m->val < y->num )
    {
        cout << "val��num��菬����\n";
    }
    else
    {
        cout << "val��num�͓�����\n";
    }
}

int main()
{
    MyClass mc( 123 );
    YourClass yc( 456 );

    compObj( &mc, &yc );

    return 0;
}