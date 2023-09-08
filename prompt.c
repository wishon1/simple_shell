#include "main.h"
/**
 *
 *
 */

int main (int argc, char **argv, char **env)
{
	(void) argc;
	(void) argv;
	(void) env;

	int get_byte;
	size_t num_byte = 0;
	char *array = NULL;
	char *arg[10];

	char dollar = '$';

	write(1, &dollar, 1);
	
	while(1)
	{
		get_byte = getline(&array, &num_byte, stdin);
		if (get_byte == -1)
		{	
			free(array);
			write(1, "\n", 2);
			return (0);
		}
		arg[0] = strtok(array, " \n");
		execve(arg[0], arg, NULL);
	}


	return (0);
}
