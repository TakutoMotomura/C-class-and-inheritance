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
    cout << "�R���X�g���N�^���Ăяo���ꂽ��\n";
}

MyClass::~MyClass()
{
    cout << "�I�u�W�F�N�g" << number;
    cout << "�̃f�X�g���N�^���Ăяo���ꂽ��\n";
}


void myFunc()
{
    MyClass obj1;
    obj1.number = 1;
}

int main()
{
    myFunc();
    MyClass obj2;
    obj2.number = 2;

    return 0;
}