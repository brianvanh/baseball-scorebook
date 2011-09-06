#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>

class Player
{
	public:
		Player( const char* last, const char* first );
		std::string getLastName();
		std::string getFirstName();
		
	private:
		std::string lname;
		std::string fname;
		//const char* lname;
		//const char* fname;
};

#endif // __PLAYER_H__
