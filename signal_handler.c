#include "main.h"

/**
 * signal_handler - Handles interrupt signals
 * @signo: Signal identifier
 */
void signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		_printf("\n");
		_printf(PROMPT);
	}
}
