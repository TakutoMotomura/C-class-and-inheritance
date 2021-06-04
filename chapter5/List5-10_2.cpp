#include <iostream>
using namespace std;

class MyClass
{
    public:
        int my_data;
        MyClass();
        MyClass( int m );
        ~MyClass();
};

MyClass::MyClass()
{
    my_data = -1;
    cout << "基本クラスの引数なしコンストラクタが呼び出されたよ\n";
}

MyClass::MyClass( int m )
{
    my_data = m;
    cout << "基本クラスの引数ありコンストラクタが呼び出されたよ\n";
}

MyClass::~MyClass()
{
    cout << "基本クラスのデストラクタが呼び出されたよ\n";
}

class NewClass:public MyClass
{
    public:
        int new_data;
        NewClass();
        NewClass( int n, int m );
        ~NewClass();
};

NewClass::NewClass()
{
    new_data = -2;
    cout << "派生クラスの引数ありコンストラクタが呼び出されたよ\n";
}

NewClass::NewClass( int n, int m )
{
    new_data = n;
    cout << "派生クラスの引数ありコンストラクタが呼び出されたよ\n";
}

NewClass::~NewClass()
{
    cout << "派生クラスのデストラクタが呼び出されたよ\n";
}


int main()
{
    NewClass obj1;

    cout << obj1.my_data << "\n";
    cout << obj1.new_data << "\n";
    cout << "**********************\n";

    NewClass obj2( 123, 456 );

    cout << obj2.my_data << "\n";
    cout << obj2.new_data << "\n";

    return 0; 
}