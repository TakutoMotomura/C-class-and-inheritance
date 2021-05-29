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


class Gu : public Hand
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
    cout << "����������\n";
}

void Gu::vsChoki()
{
    cout << "�O�[�̂�������\n";
}

void Gu::vsPa()
{
    cout << "�O�[�̂܂�����\n";
}


class Choki : public Hand
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
    cout << "�`���L�̂܂�����\n";
}

void Choki::vsChoki()
{
    cout << "����������\n";
}

void Choki::vsPa()
{
    cout << "�`���L�̂�������\n";
}


class Pa : public Hand
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
    cout << "�p�[�̂�������\n";
}

void Pa::vsChoki()
{
    cout << "�p�[�̂܂�����\n";
}

void Pa::vsPa()
{
    cout << "����������\n";
}


int main()
{
    Gu g;
    Choki c;
    Pa p;

    cout << "�O�[ vs �`���L�F";
    c.judge( &g );

    cout << "�O�[ vs �p�[�F";
    p.judge( &g );

    cout << "�O�[ vs �O�[�F";
    g.judge( &g );

    return 0;
}