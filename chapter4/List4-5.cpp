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
    cout << "�R���X�g���N�^���Ăяo����܂���" << "\n";
}

MyClass::~MyClass()
{
    cout << "�I�u�W�F�N�g" << number;
    cout << "�̃f�X�g���N�^���Ăяo����܂��� \n";
}


void myFunc()
{
    MyClass obj1; // �����ŃI�u�W�F�N�g1���쐬�����
    obj1.number = 1;

    // �����ŃI�u�W�F�N�g1���j�������
}


int main()
{
    myFunc();

    MyClass obj2; // �����ŃI�u�W�F�N�g2���쐬�����
    obj2.number = 2;

    return 0; // �����ŃI�u�W�F�N�g2���j�������
}