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
        Employee();
};


void Employee::showData()
{
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}


Employee::Employee()
{
    number = 0;
    strcpy( name, "–¢Ý’è" );
    salary = 1500000;
}


int main()
{
    Employee someone;

    someone.showData();

    return 0;
}