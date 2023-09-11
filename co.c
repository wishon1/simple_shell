#include "main.h"
/**
 * co - function that concenate the command with '/bin'
 * @arr: pointer to the command
 *
 * Return: returns a pointer containing the address of the command.
 */
char *co(char *arr)
{
	char all[1000], holder[] = "/bin/", *a;
	unsigned int i, y, len, j = 0;

	strcpy(all, arr);
	for (y = 0; y < strlen(arr); y++)
	{
		if (arr[y] == 'b')
		{
			a = arr;
			return (a);
		}
	}
	len = strlen(holder) + strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (i < strlen(holder))
		{
			all[i] = holder[i];
		}
		else
		{
			all[i] = arr[j];
			j++;
		}
	}
	all[i] = '\0';
	a = all;
	return (a);
}
