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
    cout << "��{�N���X�̃R���X�g���N�^���Ăяo���ꂽ \n";
}

MyClass::~MyClass()
{
    cout << "��{�N���X�̃f�R���X�g���N�^���Ăяo���ꂽ \n";
}

class NewClass : public MyClass
{
    public:
        NewClass();
        ~NewClass();
};

NewClass::NewClass()
{
    cout << "�h���N���X�̃R���X�g���N�^���Ăяo���ꂽ \n";
}

NewClass::~NewClass()
{
    cout << "�h���N���X�̃f�R���X�g���N�^���Ăяo���ꂽ \n";
}


int main()
{
    NewClass obj; // �����ŃR���X�g���N�^���Ăяo�����

    cout << "***************************\n";

    return 0;
}