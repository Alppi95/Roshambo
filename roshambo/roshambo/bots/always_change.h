#include "../bot_interface.h"


/*
	Always change from a previous own throw.
*/
class Always_Change : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Always Change";
	}

	virtual int get_throw(int round)
	{
		if (round == 0)
		{
			// Make the first throw randomly.
			return rand() % 3;
		}

		// Check own last throw, and then choose randomly
		// between other two options.
		int my_last_throw = own_throw[round - 1];
		int options[2];

		if (my_last_throw == ROCK)
		{ 
			options[0] = PAPER;
			options[1] = SCISSORS;
		}
		if (my_last_throw == PAPER)
		{ 
			options[0] = ROCK;
			options[1] = SCISSORS;
		}
		if (my_last_throw == SCISSORS)
		{ 
			options[0] = PAPER;
			options[1] = ROCK;
		}

		return options[rand() % 2];
	}
};
