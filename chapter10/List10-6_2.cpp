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
    cout << "‚ ‚¢‚±\n";
}

void Gu::vsChoki()
{
    cout << "‚®[‚Ì‚©‚¿\n";
}

void Gu::vsPa()
{
    cout << "‚®[‚Ì‚Ü‚¯\n";
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
    cout << "‚¿‚å‚«‚Ì‚Ü‚¯\n";
}

void Choki::vsChoki()
{
    cout << "‚ ‚¢‚±\n";
}

void Choki::vsPa()
{
    cout << "‚¿‚å‚«‚Ì‚©‚¿\n";
}