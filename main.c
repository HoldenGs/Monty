#include "monty.h"

/**
 * main - main function to take arguments for monty interpreter
 *
 * @ac: argument count
 * @av: pointer array of arguments
 *
 * Return: 0 if success, EXIT_FAILURE if failure
 */
int main(int ac, char **av)
{
	int exit;

	exit = 0;
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	exit = loop(av[1]);
	return (exit);
}

/**
 * loop - loop function to parse and interpret lines
 *
 * @file: file to read
 *
 * Return: 0 if success, EXIT_FAILURE if failure
 */
int loop(char *file)
{
	int i, fd;

	if (access(file, R_OK))
		fd = open(file, O_RDONLY);
	while (line[c])
	{

	}
	return (0);
}
