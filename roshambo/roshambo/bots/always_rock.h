#include "../bot_interface.h"


/*
	Always throw Rock.
*/
class Always_Rock : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Always Rock";
	}

	virtual int get_throw(int round)
	{
		return ROCK;
	}
};
