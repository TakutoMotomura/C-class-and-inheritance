#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player
{
    protected:
        char mark;
        int number;
    public:
        virtual void selected() = 0;
        char getMark();
        int getNumber();
        Player( char mark );
};

class User : public Player
{
    public:
        void selected();
        User( char mark );
};

class Computer : public Player
{
    public:
        void selected();
        Computer( char mark );
};

class Board
{
    private:
        char cell[3][3];
    public:
        void show();
        bool setCell( Player *player );
        bool judge( Player *player );
        Board();
};

char Player::getMark()
{
    return mark;
}

int Player::getNumber()
{
    return number;
}

Player::Player( char mark )
{
    this->mark = mark;
}
