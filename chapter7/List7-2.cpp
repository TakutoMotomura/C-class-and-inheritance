#include <iostream>
using namespace std;

class MyClass
{
    public:
        int myVal;
        MyClass();
        MyClass( int m );
        ~MyClass();
};

MyClass::MyClass()
{
    myVal = 0;
    cout << "�R���X�g���N�^���Ăяo���ꂽ��\n";
}

MyClass::MyClass( int m )
{
    myVal = m;
    cout << "��������̃R���X�g���N�^���Ăяo���ꂽ��\n";
}

MyClass::~MyClass()
{
    cout << "�f�R���X�g���N�^���Ăяo���ꂽ��\n";
}


void func();


MyClass g( 123 );


int main()
{
    cout << "main()�����s���ꂽ��\n";

    cout << "g.myVal�̒l�F" << g.myVal << "\n";

    func();
    func();

    cout << "main()���I�������\n";

    return 0;
}


void func()
{
    cout << "func()���Ăяo���ꂽ��\n";

    MyClass a;

    cout << "a.myVal�̒l�F" << a.myVal << "\n";

    a.myVal = 456;

    cout << "func()�𔲂����\n";
}