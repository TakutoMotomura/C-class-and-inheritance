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
};

Employee::Employee()
{
    name = new char [80];

    number = 0;
    strcpy( name, "未設定" );
    salary = 150000;
    cout << "コンストラクタが呼び出されたよ\n";
}

Employee::~Employee()
{
    delete [] name;
    cout << "デストラクタが呼び出されたよ\n";
}

void show( Employee obj );

int main()
{
    Employee tanaka;

    tanaka.number = 1234;
    strcpy( tanaka.name, "田中一郎" );
    tanaka.salary = 200000;

    cout << "show()を呼び出すよ\n";
    show( tanaka );
    cout << "show()を抜けたよ\n";

    cout << "氏名：" << tanaka.name << "\n";

    return 0;
}

void show( Employee obj )
{
    cout << "社員番号：" << obj.number << "\n";
    cout << "氏名：" << obj.name << "\n";
    cout << "給与：" << obj.salary << "\n";
}