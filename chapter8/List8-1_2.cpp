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
    cout << "コンストラクタが呼び出されたよ\n";
}

MyClass::MyClass( int m )
{
    myVal = m;
    cout << "引数ありのコンストラクタが呼び出されたよ\n";
}

MyClass::~MyClass()
{
    cout << "デストラクタが呼び出されたよ\n";
}

void func();

MyClass *gPtr;

int main()
{
    cout << "main関数が実行されたよ\n";

    gPtr = new MyClass( 123 );

    cout << gPtr->myVal << "\n";

    func();

    delete gPtr;

    cout << "main関数が終了するよ\n";

    return 0;
}

void func()
{
    MyClass *ptr;

    cout << "func関数が呼び出されたよ\n";

    for( int i = 1; i <= 3; i++ )
    {
        ptr = new MyClass( i );

        cout << ptr->myVal << "\n";

        delete ptr;
    }

    cout << "func関数を抜けるよ\n";
}