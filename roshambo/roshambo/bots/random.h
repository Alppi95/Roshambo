#include "../bot_interface.h"


/*
	Play a Rock, Paper, or Scissors ramdomly. This is
	actually Game Theoretically Optimal (GTO) solution.
*/
class Random : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Random";
	}

	virtual int get_throw(int round)
	{
		// Note that Rock, Paper, and Scissors correspond
		// to 0, 1, and 2. We can transform a random
		// number to one of these with % 3.
		return rand() % 3;
	}
};
