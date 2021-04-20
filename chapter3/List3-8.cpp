#include <iostream>
using namespace std;

class MyMessage
{
    public:

    void showMessage();
    void showMessage( const char *s );
    void showMessage( const char *a, int n );
};


void MyMessage::showMessage()
{
    cout << "����" << "\n";
}

void MyMessage::showMessage( const char *s )
{
    cout << s << "\n";
}

void MyMessage::showMessage( const char *s, int n )
{
    for( int i = 0; i < n; i++ )
    {
        cout << s << "\n";
    }
}


int main()
{
    MyMessage obj;

    obj.showMessage();
    obj.showMessage("��������");
    obj.showMessage("����",3);

    return 0;
}