#include <iostream>
#include <cstring>
#include "Company.h"
using namespace std;

void Employee::showData()
{
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
}

Employee::Employee()
{
    number = 0;
    strcpy( name, "���ݒ�" );
    salary = 150000;
}

Employee::Employee( int nu, const char *na, int sa )
{
    number = nu;
    strcpy( name, na );
    salary = sa;
}


void Director::showData()
{
    Employee::showData();
    cout << "�����ۗL���G" << stock << "\n";
}

Director::Director()
{
    stock = 100;
}

Director::Director( int nu, const char *na, int sa, int st ) : Employee( nu, na, sa )
{
    stock = st;
}


void Manager::showData()
{
    Employee::showData();
    cout << "�o����F" << travelAllowance << "\n";
}

Manager::Manager()
{
    travelAllowance = 10000;
}

Manager::Manager( int nu, const char *na, int sa, int tr ) : Employee( nu, na, sa )
{
    travelAllowance = tr;
}


void Salesman::showData()
{
    Employee::showData();
    cout << "����F" << sales << "\n";
}

Salesman::Salesman()
{
    sales = 0;
}

Salesman::Salesman( int nu, const char *na, int sa, int ss) : Employee( nu, na, sa)
{
    sales = sa;
}