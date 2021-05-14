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
    cout << "CellPhone�̃R���X�g���N�^���Ăяo���ꂽ\n";
}

CellPhone::~CellPhone()
{
    cout << "CellPhone�̃f�R���X�g���N�^���Ăяo���ꂽ\n";
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
    cout << "�g�ѓd�b�ԍ��F" << phone.number << "\n";
    cout << "�X�}�z���ǂ����F" << phone.smart << "\n";
}

Employee::Employee()
{
    cout << "Employee�̃R���X�g���N�^���Ăяo���ꂽ\n";
}

Employee::~Employee()
{
    cout << "Employee�̃f�R���X�g���N�^���Ăяo���ꂽ\n";
}


int main()
{
    Employee tanaka;

    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 3000000;
    strcpy( tanaka.phone.number, "090-1111-1111" );
    tanaka.phone.smart = true;

    tanaka.showData();

    return 0;
}