#include "monty.h"

/**
*
*
*/

int main(int argc, char *argv[])
{
	FILE *fd;
	size_t len;
	char *str_line = NULL;
	ssize_t buf_line;
	int iterador = 1;
	int save_token;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}

	while((buf_line = getline(&str_line, &len, fd)) != -1)
	{
		printf("$---%s %zu\n", str_line, buf_line);
		iterador++;
	}
}
