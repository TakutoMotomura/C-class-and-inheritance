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
        virtual void select() = 0;
        char getMark();
        int getNumber();
        Player( char mark );
};

class User:public Player
{
    public:
        void select();
        User( char mark );
};

class Computer:public Player
{
    public:
        void select();
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

void User::select()
{
    int n;

    do
    {
        cout << mark << "の手を選んでね = ";
        cin >> n;
    } while ( n < 1 || n > 9);

    number = n;
}

User::User( char mark ):Player( mark )
{
    //
}

void Computer::select()
{
    number = rand() % 9 + 1;
    cout << mark << "の手を選んでね = " << number << "\n";
}

Computer::Computer( char mark ):Player( mark )
{
    //
}

void Board::show()
{
    cout << "\n";
    for( int v = 0; v < 3; v++ )
    {
        cout << "+-+-+-+\n";
        for( int h = 0; h < 3; h++ )
        {
            cout << "|" << cell[v][h];
        }

        cout << "|\n";
    }

    cout << "+-+-+-+\n";
}