#include <iostream>
using namespace std;

void func();

int g = 123;


int main()
{
    cout << "�v���O�������N��������\n";

    cout << "g�̒l�F" << g << "\n";

    func();
    func();

    cout << "�v���O�������I�������\n";

    return 0;
}


void func()
{
    cout << "�֐����Ăяo���ꂽ��\n";

    int a;

    cout << "a�̒l�F" << a << "\n";

    a = 456;

    //cout << "a�̒l�F" << a << "\n";

    cout << "�֐��𔲂����\n";
}