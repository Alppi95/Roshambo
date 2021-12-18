#include "../bot_interface.h"


/*
	Play to beat opponent's earlier throw.
*/
class Beat_Earlier : public Bot
{
public:

	virtual std::string get_name()
	{
		return "Beat Earlier";
	}

	virtual int get_throw(int round)
	{
		if (round == 0)
		{
			// Make the first throw randomly.
			return rand() % 3;
		}

		// Check opponent's last throw and throw to beat it!
		int last_throw = opp_throw[round - 1];

		if (last_throw == ROCK)
			return PAPER;
		if (last_throw == PAPER)
			return SCISSORS;
		if (last_throw == SCISSORS)
			return ROCK;
	}
};

