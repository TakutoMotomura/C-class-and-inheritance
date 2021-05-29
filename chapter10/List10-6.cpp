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
    cout << "あいこだよ\n";
}

void Gu::vsChoki()
{
    cout << "グーのかちだよ\n";
}

void Gu::vsPa()
{
    cout << "グーのまけだよ\n";
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
    cout << "チョキのまけだよ\n";
}

void Choki::vsChoki()
{
    cout << "あいこだよ\n";
}

void Choki::vsPa()
{
    cout << "チョキのかちだよ\n";
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
    cout << "パーのかちだよ\n";
}

void Pa::vsChoki()
{
    cout << "パーのまけだよ\n";
}

void Pa::vsPa()
{
    cout << "あいこだよ\n";
}


int main()
{
    Gu g;
    Choki c;
    Pa p;

    cout << "グー vs チョキ：";
    c.judge( &g );

    cout << "グー vs パー：";
    p.judge( &g );

    cout << "グー vs グー：";
    g.judge( &g );

    return 0;
}