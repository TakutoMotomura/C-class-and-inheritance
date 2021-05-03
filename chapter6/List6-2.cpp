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
    cout << "�����f�[�^�F";
    MyClass::func2( s );
}


int main()
{
    NewClass obj;

    obj.func1( 123 );
    obj.func2( "�I�[�o�[���C�h�����֐�" );


    MyClass mc;

    mc.func2( "��{�N���X�̉��z�֐�" );


    return 0;
}