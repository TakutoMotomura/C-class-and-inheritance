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
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}


int main()
{
    Employee obj[3];

    obj[0].number = 1234;
    strcpy( obj[0].name, "�c����Y" );
    obj[0].salary = 2000000;

    obj[1].number = 1235;
    strcpy( obj[1].name, "������Y" );
    obj[1].salary = 2500000;

    obj[2].number = 1236;
    strcpy( obj[2].name, "��؎O�Y" );
    obj[2].salary = 3000000;

    for ( int i = 0; i < 3; i++ )
    {
        obj[i].showData();
    }

    return 0;
}