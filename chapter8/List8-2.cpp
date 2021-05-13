#include <iostream>
#include <cstring>
using namespace std;

class CellPhone
{
    public:
        char number[20];
        bool smart;
};

class Employee
{
    public:
        int number;
        char name[80];
        int salary;

        CellPhone phone;

        void showData();
};

void Employee::showData()
{
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
    cout << "�g�ѓd�b�F" << phone.number << "\n";
    cout << "�X�}�z���ǂ����F" << phone.smart << "\n";
}

Employee tanaka;


int main()
{
    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 2000000;
    strcpy( tanaka.phone.number, "090-1111-1111" );
    tanaka.phone.smart = true;

    tanaka.showData();


    Employee sato;
    sato.number = 1235;
    strcpy( sato.name, "������Y" );
    sato.salary = 250000;
    strcpy( sato.phone.number, "090-2222-2222" );
    sato.phone.smart = true;
    sato.showData();


    Employee *suzuki = new Employee;
    suzuki->number = 1236;
    strcpy( suzuki->name, "��؎O�Y" );
    suzuki->salary = 300000;
    strcpy( suzuki->phone.number, "090-3333-3333" );
    suzuki->phone.smart = false;
    suzuki->showData();
    delete suzuki;


    return 0;
}
