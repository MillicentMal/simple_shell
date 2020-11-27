#include "holberton.h"
#include <strings.h>
#include <stdio.h>
/**
 *main-executes simple commans
 *Return:0-success, non-zero-fail.
 *@argc: number of arguments passed
*@argv1: pointer to array of arguments
*/
int main(int argc __attribute__((unused)), char **argv1)
{
int n;
size_t len;
char *command = 0;
char *ccommand;
char *argv[] = {""};

while (1 && (isatty(STDIN_FILENO)))
{
write(1, "#cisfun$  ", 9);
n = getline(&command, &len, stdin);
ccommand = (char *) malloc(_strlen(command - 1));


_strcpy(ccommand, command);
argv[0] = ccommand;
argv[1] = NULL;
if (n == -1)
	perror("ERROR!");
else
{
if (fork() != 0) /*We are in parent process, wait for child*/
{
wait(NULL);
}
else
{
if (execve(argv[0], argv, NULL) == -1)
	perror(argv1[0]);
}
}
if (_strcmp(ccommand, "exit") == 0)
{

exit(0);
}
}
free(command);
return (0);
}

