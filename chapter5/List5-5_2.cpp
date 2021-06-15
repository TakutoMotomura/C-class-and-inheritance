#include <iostream>
#include <cstring>
using namespace std;


class Employee
{
    public:
        int number;
        char name[80];
        int salary;
    protected:
        void showData();
};

void Employee::showData()
{
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

class Salesman:public Employee
{
    public:
        int sales;
        void showAllData();
};

void Salesman::showAllData()
{
    showData();

    cout << sales << "\n";
}

int main()
{
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy( tanaka.name, "“c’†ˆê˜Y" );
    tanaka.salary = 2000000;
    tanaka.sales = 50000;

    tanaka.showAllData();
}
