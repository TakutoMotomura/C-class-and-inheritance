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
    cout << "デコンストラクタが呼び出されたよ\n";
}


void func();


MyClass g( 123 );


int main()
{
    cout << "main()が実行されたよ\n";

    cout << "g.myValの値：" << g.myVal << "\n";

    func();
    func();

    cout << "main()が終了するよ\n";

    return 0;
}


void func()
{
    cout << "func()が呼び出されたよ\n";

    MyClass a;

    cout << "a.myValの値：" << a.myVal << "\n";

    a.myVal = 456;

    cout << "func()を抜けるよ\n";
}