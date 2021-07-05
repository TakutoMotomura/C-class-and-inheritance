#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Hand
{
    public:
        virtual void judge( Hand *h ) = 0;
        virtual void vsGu() = 0;
        virtual void vsChoki() = 0;
        virtual void vsPa() = 0;
};

class Gu:public Hand
{
    public:
        void judge( Hand *h );
        void vsGu();
        void vsChoki();
        void vsPa();
};

void Gu::judge( Hand *h )
{
    h->vsGu();
}

void Gu::vsGu()
{
    cout << "������\n";
}

void Gu::vsChoki()
{
    cout << "���[�̂���\n";
}

void Gu::vsPa()
{
    cout << "���[�̂܂�\n";
}

class Choki:public Hand
{
    public:
        void judge( Hand *h );
        void vsGu();
        void vsChoki();
        void vsPa();
};

void Choki::judge( Hand *h )
{
    h->vsChoki();
}

void Choki::vsGu()
{
    cout << "���傫�̂܂�\n";
}

void Choki::vsChoki()
{
    cout << "������\n";
}

void Choki::vsPa()
{
    cout << "���傫�̂���\n";
}

class Pa:public Hand
{
    public:
        void judge( Hand *h );
        void vsGu();
        void vsChoki();
        void vsPa();
};

void Pa::judge( Hand *h )
{
    h->vsPa();
}

void Pa::vsGu()
{
    cout << "�ρ[�̂���\n";
}

void Pa::vsChoki()
{
    cout << "�ρ[�̂܂�\n";
}

void Pa::vsPa()
{
    cout << "������\n";
}

int main()
{
    Gu      g;
    Choki   c;
    Pa      p;

    cout << "���[ vs ���傫 �E�E�E";
    c.judge( &g );

    cout << "���[ vs �ρ[ �E�E�E";
    p.judge( &g );

    cout << "���[ vs ���[ �E�E�E";
    g.judge( &g );

    return 0;
}