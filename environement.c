#include"main.h"
/**
 * environment - print the environment of the shell
 * @env: is a pointer
 */
void environment(char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
}
