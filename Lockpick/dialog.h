#ifndef DIALOG_H
# define DIALOG_H

#include <iostream>

// IN GAME MESSAGES:
# define	MSG_UNLOCK(dif)		"+ You unlocked a Lev. " dif " lock."
# define	MSG_LOSELIFE		"+ You entered the WRONG combination and lost one lockpick"
# define	MSG_LIFELEFT(life)	"+ You have currently " life " attempts."
# define	MSG_WIN				"+ Congratulations! You Opened all the locks and entered The Vault!"
# define	MSG_FAIL			"+ You Have Failed! Game Over!"

// ERROR MESSAGES:
# define	ERR_NEEDMOREARGS	"**ERROR: You entered less than 5 digits. Please try again.**"
# define	ERR_TOOMANYARGS		"**ERROR: You entered more than 5 digits. Please try again.**"

static void	IntroDialog()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "|             OPEN THE VAULT             |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "RULES:" << std::endl;
	std::cout << "+ There are 10 locks to open." << std::endl;
	std::cout << "+ Locks have 5-digit combinations." << std::endl;
	std::cout << "+ You will base your guess upon the sum" << std::endl;
	std::cout << "  and the product between the Lock digits." << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

static void	HintDialog(int sum, int prod)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

#endif