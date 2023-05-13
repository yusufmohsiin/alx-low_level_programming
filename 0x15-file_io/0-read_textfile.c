#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout.
 * @filename: A pointer to name of file.
 * @letters: The number of letters to read and print.
 *
 * Return: the actual number of bytes the function can read and print.
 *         Or 0 if an error occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *car;

	if (filename == NULL) /*Checks if the file name is valid*/
		return (0);

	car = malloc(sizeof(char) * letters); /*doing dynamically allocate memory*/
	if (car == NULL) /*Memory allocate faild*/
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, car, letters);
	z = write(STDOUT_FILENO, car, y);

	if (x == -1 || y == -1 || z == -1 || z != y) /*Checks syscal errors*/
	{
		free(car);
		return (0);
	}

	free(car);
	close(x);

	return (z);
}
