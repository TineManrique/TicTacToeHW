#ifndef BOARD_H
#define BOARD_H

#include "Player.h"



class Board
{
    public:
        Board ();
        virtual ~Board();

        void initialize();
        void render();
        bool update(int move, char icon);
        bool check_marked ();
        char box[9];
        bool checkWin();
        bool check_draw();
    protected:
    private:



};

#endif // BOARD_H
