#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        int number;
        char *name[80];
        int salary;

        void showData();
        
        Employee();
        Employee( const Employee &obj );
        ~Employee();
};

Employee::Employee()
{
    name = new char[80];

    number = 0;
    strcpy( name, "未設定" );
    salary = 150000;
    
    cout << "コンストラクタが呼び出されたよ\n";
}

Employee::Employee( const Employee &obj )
{
    name  new char[80];

    number = obj.number
    strcpy( name, obj.name );
    salary = obj.salary;

    cout << "引数ありのコンストラクタが呼び出されたよ\n";
}

Employee::~Employee()
{
    delete [] name;

    cout << "デストラクタが呼び出されたよ\n";
}

void Employee::showData()
{
    cout << "社員番号：" << number << "\n";
    cout << "氏名：" << name << "\n";
    cout << "給与：" << salary << "\n";
}