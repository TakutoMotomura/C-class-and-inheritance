#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        int number;
        char name[80];
        int salary;
        void showData();
};

void Employee::showData()
{
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
}

int main()
{
    Employee tanaka, someone;

    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 3000000;

    someone = tanaka;

    tanaka.salary = 5000000;

    tanaka.showData();
    someone.showData();

    return 0;
}