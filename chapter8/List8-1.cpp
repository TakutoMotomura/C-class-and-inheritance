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
    cout << "コンストラクタが呼び出された\n";
}

MyClass::MyClass( int m )
{
    myVal = m;
    cout << "引数ありのコンストラクタが呼び出された\n";
}

MyClass::~MyClass()
{
    cout << "デコンストラクタが呼び出された\n";
}


void func();

MyClass *gPtr;


int main()
{
    cout << "main()が実行された\n";

    gPtr = new MyClass( 123 );

    cout << gPtr->myVal << "\n";

    func();

    delete gPtr;

    cout << "main()が終了するよ\n";

    return 0;
}


void func()
{
    MyClass *ptr;

    cout << "func()が呼び出された\n";

    for( int i = 1; i <= 3; i++ )
    {
        ptr = new MyClass( i );

        cout << ptr->myVal << "\n";

        delete ptr;
    }

    cout << "func()を抜けるよ\n";

}