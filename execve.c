#include "header.h"

/**
  * excute_command - excute a argument
  *
  * @args: arguments passed by parameter
  *
  */

void execute_command(char *buffer __attribute__((unused)), char *str, char **my_tokens)
{
	/*struct stat stats;*/
	/*char *args[] = buffer;*/
	/*char *path = NULL, *command = NULL;*/
 	/*my_tokens = NULL;*/

	/*tokenize_args(buffer, my_tokens);*/


	/*for (i = 0; my_tokens != NULL; i++)
		printf("%s\n", my_tokens[i]);*/

	/*path = strdup(my_tokens[0]);
	command = strdup(my_tokens);*/
	/*printf("%s\n", path);*/

	/*if (stat(strcat(path, command), &stats) == 0)
	{*/
		/*printf("%s\n", path);*/

	if ((execve(my_tokens[0], my_tokens, NULL)) == -1)
	{
		fprintf(stderr, "%s: %s\n", str, strerror(errno));
		exit(errno);
	}
	/*}*/
}
