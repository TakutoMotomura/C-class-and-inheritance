#include <iostream>
using namespace std;

void func();

int g = 123;


int main()
{
    cout << "プログラムが起動したよ\n";

    cout << "gの値：" << g << "\n";

    func();
    func();

    cout << "プログラムが終了するよ\n";

    return 0;
}


void func()
{
    cout << "関数が呼び出されたよ\n";

    int a;

    cout << "aの値：" << a << "\n";

    a = 456;

    //cout << "aの値：" << a << "\n";

    cout << "関数を抜けるよ\n";
}