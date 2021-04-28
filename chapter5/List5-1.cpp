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


class Salesman:public Employee
{
    // ‚±‚ê‚ÍshowData()‚Å‚Í•\Ž¦‚³‚ê‚È‚¢
    public:
    int sales;
};


int main()
{
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy( tanaka.name, "“c’†ˆê˜Y" );
    tanaka.salary = 2000000;
    tanaka.sales = 50000;

    tanaka.showData();

    return 0;
}