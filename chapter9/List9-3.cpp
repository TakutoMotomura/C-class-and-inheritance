#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        int number;
        char *name;
        int salary;

        Employee();
        ~Employee();
};

Employee::Employee()
{
    name = new char[80];

    number = 0;
    strcpy( name, "���ݒ�" );
    salary = 150000;

    cout << "�R���X�g���N�^���Ăяo���ꂽ\n";
}

Employee::~Employee()
{
    delete [] name;

    cout << "�f�R���X�g���N�^���Ăяo���ꂽ\n";
}

void show( Employee *ptr );



int main()
{
    Employee tanaka;

    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 200000;

    cout << "show()���Ăяo����\n";
    show( &tanaka );
    cout << "show()�𔲂��܂���\n";

    cout << "�����F" << tanaka.name << "\n";

    return 0;
}


void show( Employee *ptr )
{
    cout << "�Ј��ԍ��F" << ptr->number << "\n";
    cout << "�����F" << ptr->name << "\n";
    cout << "���^�F" << ptr->salary << "\n";
}