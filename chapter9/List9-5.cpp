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
    cout << "社員番号：" << number << "\n";
    cout << "氏名：" << name << "\n";
    cout << "給与：" << salary << "\n";
}

int main()
{
    Employee tanaka, someone;

    tanaka.number = 1234;
    strcpy( tanaka.name, "田中一郎" );
    tanaka.salary = 3000000;

    someone = tanaka;

    tanaka.salary = 5000000;

    tanaka.showData();
    someone.showData();

    return 0;
}