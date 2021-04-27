#include <iostream>
using namespace std;


class MyClass
{
    public:
        int number;
        MyClass();
        ~MyClass();
};


MyClass::MyClass()
{
    cout << "コンストラクタが呼び出されました" << "\n";
}

MyClass::~MyClass()
{
    cout << "オブジェクト" << number;
    cout << "のデストラクタが呼び出されました \n";
}


void myFunc()
{
    MyClass obj1; // ここでオブジェクト1が作成される
    obj1.number = 1;

    // ここでオブジェクト1が破棄される
}


int main()
{
    myFunc();

    MyClass obj2; // ここでオブジェクト2が作成される
    obj2.number = 2;

    return 0; // ここでオブジェクト2が破棄される
}