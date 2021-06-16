#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        int number;
        char name[80];
        int salary;
};

class Director:public Employee
{
    public:
        int stock;
};

class Manager:public Employee
{
    public: 
        int travelAllowance;
};

class Salesman:public Employee
{
    public:
        int sales;
};

int main()
{
    Director y;
    y.number = 1111;
    strcpy( y.name, "������Y" );
    y.salary = 500000;
    y.stock = 1000;
    cout << "�Ј��ԍ��F" << y.number << "\n";
    cout << "�����F" << y.name << "\n";
    cout << "���^�F" << y.salary << "\n";
    cout << "�������F" << y.stock << "\n";

    Manager k;
    k.number = 2222;
    strcpy( k.name, "�ے���Y" );
    k.salary = 350000;
    k.travelAllowance = 100000;
    cout << "�Ј��ԍ��F" << k.number << "\n";
    cout << "�����F" << k.name << "\n";
    cout << "���^�F" << k.salary << "\n";
    cout << "�o����F" << k.travelAllowance << "\n";

    Salesman e;
    e.number = 3333;
    strcpy( e.name, "�c�ƎO�Y" );
    e.salary = 250000;
    e.sales = 1234;
    cout << "�Ј��ԍ��F" << e.number << "\n";
    cout << "�����F" << e.name << "\n";
    cout << "���^�F" << e.salary << "\n";
    cout << "����F" << e.sales << "\n";

    return 0;
}