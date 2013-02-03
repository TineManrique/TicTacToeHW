#include <iostream>
#include <cstdlib>
#include "Board.h"
#include "Game.h"

using namespace std;

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

void Board::initialize()
{
    int i=0;
    for (i=0;i<9;i++)
    {
        box[i]= '1' +i;
    }
}
void Board::render()
{
    system ("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1: BEA (+)  -  Player 2: TIN (*)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << box[0] << "  |  " << box[1] << "  |  " << box[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[3] << "  |  " << box[4] << "  |  " << box[5] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[6] << "  |  " << box[7] << "  |  " << box[8] << endl;

	cout << "     |     |     " << endl << endl;
}
bool Board::update(int move, char icon)
{

		if (move == 1 && box[0] == '1')
        {
            box[0] = icon;
            render();
            return 1;
        }

        else if (move == 2 && box[1] == '2')
        {
            box[1] = icon;
            render();
            return 1;
        }
        else if (move == 3 && box[2]== '3')
        {
            box[2] = icon;
            render();
            return 1;
        }
        else if (move == 4 && box[3] == '4')
        {
            box[3] = icon;
            render();
            return 1;
        }
        else if (move == 5 && box[4] == '5')
        {
            box[4] = icon;
            render();
            return 1;
        }
        else if (move == 6 && box[5] == '6')
        {
            box[5] = icon;
            render();
            return 1;
        }
        else if (move == 7 && box[6] == '7')
        {
            box[6] = icon;
            render();
            return 1;
        }
        else if (move == 8 && box[7] == '8')
        {
            box[7] = icon;
            render();
            return 1;
        }
        else if (move == 9 && box[8] == '9')
        {
            box[8] = icon;
            render();
            return 1;
        }
        else if (move == 10 && box[9] == '10')
        {
            box[9] = icon;
            render();
            return 1;
        }
		else
        {
            cout<<"Invalid move! ";
            return 0;
        }
}
bool Board::checkWin()
{
	if ((box[0] == box[1]) && (box[1] == box[2]))
    {
		return 1;
    }
    else if ((box[3] == box[4]) && (box[4] == box[5]))
    {
        return 1;
    }
    else if ((box[6] == box[7]) && (box[7] == box[8]))
    {
        return 1;
    }
    else if ((box[0] == box[4]) && (box[4] == box[8]))
    {
        return 1;
    }
    else if ((box[2] == box[4]) && (box[4] == box[6]))
    {
        return 1;
    }
    else if ((box[0] == box[3]) && (box[3] == box[6]))
    {
        return 1;
    }
    else if ((box[1] == box[4]) && (box[4] == box[7]))
    {
        return 1;
    }
    else if ((box[2] == box[5]) && (box[5] == box[8]))
    {
        return 1;
    }
    else
        return 0;
    }
bool Board::check_draw()
{
    if (box[0] != '1' && box[1] != '2' && box[2] != '3' && box[3] != '4' && box[4] != '5' && box[5] != '6' && box[6] != '7' && box[7] != '8'&& box[8] != '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
