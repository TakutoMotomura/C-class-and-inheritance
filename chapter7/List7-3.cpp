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


int main()
{
    cout << "main()�����s���ꂽ��\n";

    func();
    func();

    cout << "main()���I�������\n";

    return 0;
}


void func()
{
    cout << "func()���Ăяo���ꂽ��\n";

    static int a = 123;

    cout << "�ÓI�ϐ��̒l�F" << a << "\n";

    a++;


    static MyClass obj( 456 );

    cout << "�����o�ϐ��̒l�F" << obj.myVal << "\n";

    obj.myVal++;

    cout << "func()�𔲂����\n";
}