#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

int main(void)
{
	struct s_tank *tank = initTank();

	/*-------------------
	launch your test here
	--------------------*/
	tankPush(tank, 10);
	printf("total energy now is : %i\n", tank->stacks[tank->n]->sum);
	tankPush(tank, 50);
	tankPush(tank, 50);
	tankPush(tank, 50);
	tankPush(tank, 50);
	tankPop(tank);
	tankPop(tank);
	return (0);
}



// Function used for the test
// Don't go further :)
