#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        int number;
        char *name[80];
        int salary;

        void showData();
        
        Employee();
        Employee( const Employee &obj );
        ~Employee();
};

Employee::Employee()
{
    name = new char[80];

    number = 0;
    strcpy( name, "���ݒ�" );
    salary = 150000;
    
    cout << "�R���X�g���N�^���Ăяo���ꂽ��\n";
}

Employee::Employee( const Employee &obj )
{
    name  new char[80];

    number = obj.number
    strcpy( name, obj.name );
    salary = obj.salary;

    cout << "��������̃R���X�g���N�^���Ăяo���ꂽ��\n";
}

Employee::~Employee()
{
    delete [] name;

    cout << "�f�X�g���N�^���Ăяo���ꂽ��\n";
}

void Employee::showData()
{
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
}