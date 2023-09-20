#include "main.h"
/**
 * main - main function of the shell program
 * @argc: number of arguements
 * @argv: pointer to an array of pointers.
 * @env: pointer to the pointer of the evn
 * Return: return 0 on success. and 1 on failure
 */
int main(int argc, char **argv, char **env)
{
	int get_byte, pid, i;
	size_t num_byte = 0;
	char *arg[10], *array = NULL;
	(void) argc, (void)argv;

	while (1)
	{
		if (isatty(0) == 1)
			write(1, "$ ", 2);
		get_byte = getline(&array, &num_byte, stdin);
		if (get_byte == -1)
			getLine_check(array);
		if (check_space(array))
			continue;
		arg[0] = strtok(array, " \n");
		if (strcmp(arg[0], "exit") == 0)
		{
			exit_1(0, array);
		}
		if (strcmp(arg[0], "env") == 0)
		{
			environment(env);
			continue;
		}
		i = 0;
		while (arg[i] != NULL)
		{
			i++;
			arg[i] = strtok(NULL, " \n");
		}
		if (access(arg[0], X_OK) == 0)
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
