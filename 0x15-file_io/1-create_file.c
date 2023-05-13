#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: The name of the file.
 * @text_content: The content of the file.
 *
 * Return: 1 if success, otherwise return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fun, len = 0;

	if (!filename) /*Checks if the filename is NULL*/
		return (-1); /*function indicates an error*/

	fun = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

        if (fun < 0)
          return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		if (write(fun, text_content, len) != len) /*Another case for function failure*/
		{
			close(fun);
			return (-1);
		}
	}

	close(fun); /*Succeded - closed the file descriptor*/
	return (1);
}
