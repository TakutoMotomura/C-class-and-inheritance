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
    cout << "�R���X�g���N�^���Ăяo���ꂽ\n";
}

MyClass::MyClass( int m )
{
    myVal = m;
    cout << "��������̃R���X�g���N�^���Ăяo���ꂽ\n";
}

MyClass::~MyClass()
{
    cout << "�f�R���X�g���N�^���Ăяo���ꂽ\n";
}


void func();

MyClass *gPtr;


int main()
{
    cout << "main()�����s���ꂽ\n";

    gPtr = new MyClass( 123 );

    cout << gPtr->myVal << "\n";

    func();

    delete gPtr;

    cout << "main()���I�������\n";

    return 0;
}


void func()
{
    MyClass *ptr;

    cout << "func()���Ăяo���ꂽ\n";

    for( int i = 1; i <= 3; i++ )
    {
        ptr = new MyClass( i );

        cout << ptr->myVal << "\n";

        delete ptr;
    }

    cout << "func()�𔲂����\n";

}