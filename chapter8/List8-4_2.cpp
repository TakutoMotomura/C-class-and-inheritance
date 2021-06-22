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
    strcpy( number, "���ݒ�" );
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
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
    cout << "�g�ѓd�b�ԍ��F" << phone.number << "\n";
    cout << "�X�}�z���ǂ����F" << phone.smart << "\n";
}

Employee::Employee()
{
    number = 0;
    strcpy( name, "���ݒ�" );
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

    Employee tanaka( 1234, "�c����Y", 200000, "111-1111-1111", true );

    tanaka.showData();

    return 0;
}