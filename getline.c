#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char *buffer = NULL;
	char *token = NULL;
	size_t size_of_buf = 40;

	buffer = (char *)malloc(size_of_buf * sizeof(char));

	if (buffer == NULL)
	{
		free(buffer);
		exit(1);
	}


	for (; ;)
	{
		printf("%s", "#cisfun$ ");

		if (getline(&buffer, &size_of_buf, stdin) == EOF)
			break;

		if (*buffer == '\n')
			continue;

		/*printf("%s", buffer);*/

		token = strtok(buffer, " ");

		while (token)
		{
			printf("%s", token);
			token = strtok(NULL, " ");

		}

	}

	return (0);

}
