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
        Employee &operator=( Employee &obj );
};

Employee::Employee()
{
    name = new char[80];
}

Employee::~Employee()
{
    delete [] name;
}

Employee &Employee::operator=( Employee &obj )
{
    this->number = obj.number;
    this->salary = obj.salary;

    strcpy( this->name, obj.name );

    return *this;
}

int main()
{
    Employee tanaka,someone;

    tanaka.number = 1234;
    strcpy( tanaka.name, "�c����Y" );
    tanaka.salary = 300000;

    someone = tanaka;
    cout << "someone�F" << someone.name << "\n";

    strcpy( someone.name, "�R�c���Y" );
    cout << "someone�F" << someone.name << "\n";

    cout << "tanaka�F" << tanaka.name << "\n";

    return 0;
}