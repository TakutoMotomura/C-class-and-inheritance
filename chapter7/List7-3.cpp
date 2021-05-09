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


int main()
{
    cout << "main()が実行されたよ\n";

    func();
    func();

    cout << "main()が終了するよ\n";

    return 0;
}


void func()
{
    cout << "func()が呼び出されたよ\n";

    static int a = 123;

    cout << "静的変数の値：" << a << "\n";

    a++;


    static MyClass obj( 456 );

    cout << "メンバ変数の値：" << obj.myVal << "\n";

    obj.myVal++;

    cout << "func()を抜けるよ\n";
}