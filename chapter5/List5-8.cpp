#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();
        ~MyClass();
};

MyClass::MyClass()
{
    cout << "基本クラスのコンストラクタが呼び出された \n";
}

MyClass::~MyClass()
{
    cout << "基本クラスのデコンストラクタが呼び出された \n";
}

class NewClass : public MyClass
{
    public:
        NewClass();
        ~NewClass();
};

NewClass::NewClass()
{
    cout << "派生クラスのコンストラクタが呼び出された \n";
}

NewClass::~NewClass()
{
    cout << "派生クラスのデコンストラクタが呼び出された \n";
}


int main()
{
    NewClass obj; // ここでコンストラクタが呼び出される

    cout << "***************************\n";

    return 0;
}