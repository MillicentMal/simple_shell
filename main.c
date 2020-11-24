#include "holberton.h"
/**
 *main-executes simple commans
 *Return:0-success, non-zero-fail.
 */
int main(void)
{
int n;
size_t len;
char *command = 0;
char *ccommand;
char *argv[] = {""};

while (1)
{
printf("#cifun$ ");
n = getline(&command, &len, stdin);
ccommand = (char *) malloc(_strlen(command - 1));
_strcpy(ccommand, command);
argv[0] = ccommand;
argv[1] = NULL;
if (n == -1)
	puts("ERROR!");
else
{
if (fork() != 0) /*We are in parent process, wait for child*/
{
wait(NULL);
}
else
{
if (execve(argv[0], argv, NULL) == -1)
	perror(argv[0]);
}
}
if (strcmp(ccommand, "exit") == 0)
	break;
}
return (0);
}

