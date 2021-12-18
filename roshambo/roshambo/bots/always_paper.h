#include "../bot_interface.h"


/*
	Always throw Paper.
*/
class Always_Paper : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Always Paper";
	}

	virtual int get_throw(int round)
	{
		return PAPER;
	}
};
