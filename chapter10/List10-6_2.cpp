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
    cout << "あいこ\n";
}

void Gu::vsChoki()
{
    cout << "ぐーのかち\n";
}

void Gu::vsPa()
{
    cout << "ぐーのまけ\n";
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
    cout << "ちょきのまけ\n";
}

void Choki::vsChoki()
{
    cout << "あいこ\n";
}

void Choki::vsPa()
{
    cout << "ちょきのかち\n";
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
    cout << "ぱーのかち\n";
}

void Pa::vsChoki()
{
    cout << "ぱーのまけ\n";
}

void Pa::vsPa()
{
    cout << "あいこ\n";
}

int main()
{
    Gu      g;
    Choki   c;
    Pa      p;

    cout << "ぐー vs ちょき ・・・";
    c.judge( &g );

    cout << "ぐー vs ぱー ・・・";
    p.judge( &g );

    cout << "ぐー vs ぐー ・・・";
    g.judge( &g );

    return 0;
}