#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H
#include <iostream>
#include <algorithm>

using namespace std;

class Game
{
public:
    Game();
   // virtual ~Game();
    void set_board();
    void run();
    pair<int, int> play();
    void display();
    bool check();
private:
    string board[4][4] ={{"G","H","K","L"}, {"K","S","G","U"}, {"R","Q","S","H"}, {"U","L","R","Q"}};
    bool show[4][4];
};

#endif // GUESSING_GAME_H
