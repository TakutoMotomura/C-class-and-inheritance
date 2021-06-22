#include <iostream>
#include <cstring>
using namespace std;

class CellPhone
{
    public:
        char number[20];
        bool smart;
        CellPhone();
        CellPhone( const char *b, bool i );
        ~CellPhone();
};

CellPhone::CellPhone()
{
    strcpy( number, "未設定" );
    smart = false;
}

CellPhone::CellPhone( const char *cn, bool cs )
{
    strcpy( number, cn );
    smart = cs;
}

CellPhone::~CellPhone()
{
    // nanimoshinai
}

class Employee
{
    public:
        int number;
        char name[80];
        int salary;
        CellPhone phone;
        void showData();
        Employee();
        Employee( int nu, const char *na, int sa, const char *cn, bool cs );
        ~Employee();
};

void Employee::showData()
{
    cout << "社員番号：" << number << "\n";
    cout << "氏名：" << name << "\n";
    cout << "給与：" << salary << "\n";
    cout << "携帯電話番号：" << phone.number << "\n";
    cout << "スマホかどうか：" << phone.smart << "\n";
}

Employee::Employee()
{
    number = 0;
    strcpy( name, "未設定" );
    salary = 150000;
}

Employee::Employee( int nu, const char *na, int sa, const char *cn, bool cs )
{
    number = nu;
    strcpy( name, na );
    salary = sa;
}

Employee::~Employee()
{
    // nanimoshinai
}

int main()
{
    Employee someone;

    someone.showData();

    Employee tanaka( 1234, "田中一郎", 200000, "111-1111-1111", true );

    tanaka.showData();

    return 0;
}