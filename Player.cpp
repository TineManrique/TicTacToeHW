#include <iostream>
#include <string>
#include "Player.h"
#include "Board.h"

using namespace std;


Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::SetName(string n)
{
    name = n;
}
void Player::SetIcon(char i)
{
    icon = i;
}
string Player::GetName()
{
    return name;
}
char Player::GetIcon()
{
    return icon;
}
int Player::GetMove()
{
    cout << "Enter move: ";
    int move, a;
    cin >> move;
    return move;

}
