#include <iostream>
#include <cstring>
using namespace std;

class CellPhone
{
    public:
        char number[20];
        bool smart;
        CellPhone();
        ~CellPhone();
};

CellPhone::CellPhone()
{
    cout << "CellPhone�N���X�̃R���X�g���N�^���Ăяo���ꂽ��\n";
}

CellPhone::~CellPhone()
{
    cout << "CellPhone�N���X�̃f�X�g���N�^���Ăяo���ꂽ��\n";
}

class Employee
{
    public:
        int number;
        char name[80];
        int salary;
        CellPhone phone;
        void showData();
        Employee();
        ~Employee();
};

void Employee::showData()
{
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
    cout << "�g�єԍ��F" << phone.number << "\n";
    cout << "�X�}�z���ǂ���" << phone.smart << "\n";
}

Employee::Employee()
{
    cout << "Employee�N���X�̃R���X�g���N�^����т����ꂽ��\n";
}

Employee::~Employee()
{
    cout << "Employee�N���X�̃f�X�g���N�^���Ăяo���ꂽ��\n";
}

int main()
{
    Employee tanaka;
    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 200000;
    strcpy( tanaka.phone.number, "000-0000-0000" );
    tanaka.phone.smart = true;
    tanaka.showData();

    return 0;
}