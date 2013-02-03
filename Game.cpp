#include <iostream>
#include <cstdlib>
#include "Game.h"
#include "Player.h"
#include "Board.h"

using namespace std;

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::run()
{
    while(!m_isComplete)
    {
        update();
    }
}

void Game::initialize()
{
    cout << "Initializing....."<<endl;
    m_board.initialize();
    m_p1.SetName("Bea");
    m_p1.SetIcon('+');
    m_p2.SetName("Tin");
    m_p2.SetIcon('*');
    m_currPlayer = &m_p1;
    m_board.render();
}

void Game::render()
{
    cout<< "Game Rendering..."<< endl;
    m_board.render();
    //cout<< "Player 1: " << m_currPlayer-> GetName()<<endl;
    //cout << "Enter your move: "<<endl;

}

void Game::update()
{
    cout << "Player: " << m_currPlayer ->GetName()<<endl;
    m_board.update(m_currPlayer->GetMove(), m_currPlayer->GetIcon());
    m_isComplete = checkWin();
    if (!m_isComplete)
    {
        switchPlayer();

    }
}
bool Game::checkWin()
{
    bool a, b;
    a = m_board.checkWin();

    if (a)
    {
        cout << "\n\n\n\a\a\a\aPlayer " << m_currPlayer-> GetName()<< " wins!"<<endl;
        exit (0);
    }
    else
        {
            b = m_board.check_draw();
            if (b)
            {
               cout << "\n\n\n\a\a\a\aDRAW!"<<endl;
               exit (0);
            }
        }
}
void Game::switchPlayer()
{
    cout << "Switching player......" <<endl;
    if (m_currPlayer==&m_p1)
    {

        m_currPlayer=&m_p2;
    }
    else
    {
        m_currPlayer=&m_p1;
    }
}
