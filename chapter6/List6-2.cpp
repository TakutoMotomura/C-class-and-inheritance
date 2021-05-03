#include <iostream>
using namespace std;

class MyClass
{
    public:
        void func1( int a );
        virtual void func2( const char *s );
};


void MyClass::func1( int a )
{
    cout << a << "\n";
}

void MyClass::func2( const char *s )
{
    cout << s << "\n";
}


class NewClass : public MyClass
{
    public:
        void func2( const char *s );
};

void NewClass::func2( const char *s )
{
    cout << "文字データ：";
    MyClass::func2( s );
}


int main()
{
    NewClass obj;

    obj.func1( 123 );
    obj.func2( "オーバーライドした関数" );


    MyClass mc;

    mc.func2( "基本クラスの仮想関数" );


    return 0;
}