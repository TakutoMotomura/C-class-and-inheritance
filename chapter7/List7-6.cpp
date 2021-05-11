#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        static int objNum;
        static const char *companyName;
        
        int number;
        char name[80];
        int salary;

        void showData();

        Employee();
        Employee( const char *na, int sa );
};

int Employee::objNum = 0;
const char *Employee::companyName = "�������쏊";

Employee::Employee()
{
    objNum++;

    number = objNum;
    strcpy( name, "���ݒ�" );
    salary = 150000;
}

Employee::Employee( const char *na, int sa )
{
    objNum++;

    number = objNum;
    strcpy( name, na );
    salary = sa;
}

void Employee::showData()
{
    cout << "��Ж��F" << companyName << "\n";
    cout << "�Ј��ԍ��F" << number << "\n";
    cout << "�����F" << name << "\n";
    cout << "���^�F" << salary << "\n";
}



int main()
{
    Employee tanaka( "�c����Y", 200000 );
    Employee sato( "������Y", 250000 );
    Employee someone;

    tanaka.showData();
    sato.showData();
    someone.showData();

    cout << "���݂̎Ј����F" << Employee::objNum << "\n";

    return 0;
}