#include "player.h"

Player::Player( const char* last, const char* first)
{
	fname = first;
	lname = last;
}

std::string Player::getLastName()
{
	return lname;
}

std::string Player::getFirstName()
{
	return fname;
}