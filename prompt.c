#include "main.h"
/**
 *
 *
 */

int main(int argc, char **argv, char **env)
{
	int get_byte, pid, i;
	size_t num_byte = 0;
	char *array = NULL;
	char *arg[10];
	(void) argc;
	(void) argv;

	while(1)
	{
		if (isatty(0) == 1)
			write(1, "$ ", 2);
		get_byte = getline(&array, &num_byte, stdin);
		if (get_byte == -1)
		{	
			free(array);
			write(1, "\n", 2);
			exit(0);
		}
		if (check_space(array))
			continue;
		arg[0] = strtok(array, " \n");
		if (strcmp(arg[0], "env") == 0)
		{
			environment(env);
			continue;
		}
		i = 0;
		while(arg[i] != NULL)
		{
			i++;
			arg[i] = strtok(NULL, " \n");
		}
		if (access(arg[0], F_OK)  == 0)
		{
			pid = fork();
			if (pid == 0)
				execve(arg[0], arg, NULL);
			else
				wait(NULL);
		}
	}
	return (0);
}
