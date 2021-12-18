#include "../bot_interface.h"


/*
	Always throw Scissors.
*/
class Always_Scissors : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Always Scissors";
	}

	virtual int get_throw(int round)
	{
		return SCISSORS;
	}
};
