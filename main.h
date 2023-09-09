#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void exit_1(int value, char *pointer);
int check_space(char *array);
void environment(char **env);
#endif
