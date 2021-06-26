#include <iostream>
using namespace std;

class MyClass
{
    private:
        int pri_data;
    protected:
        int pro_data;
    public:
        int pub_data;
        friend void show( MyClass *ptr );
        MyClass();
};

MyClass::MyClass()
{
    pri_data = 123;
    pro_data = 456;
    pub_data = 789;
}

void show( MyClass *ptr )
{
    cout << ptr->pri_data << "\n";
    cout << ptr->pro_data << "\n";
    cout << ptr->pub_data << "\n";
}

void disp( MyClass *ptr )
{
    // cout << ptr->pri_data << "\n";
    // cout << ptr->pro_data << "\n";
    cout << ptr->pub_data << "\n";
}

int main()
{
    MyClass obj;

    cout << "�t�����h�֐��F\n";
    show( &obj );

    cout << "�ʏ�̊֐��F\n";
    disp( &obj );

    return 0;
}