#include "main.h"
#include <stdlib.h>

/**
  * create_file - o with a specified name and content
  * @filename: o to create
  * @text_content: content to read into the o
  * Author: Yusuf Mohsen
  *
  * Return: 1 on success, -1 on any failure
  */

int create_file(const char *filename, char *text_content)
{
	int x, y, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (x == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(x, text_content, len);
	}
	y = close(x);
	if (y == -1)
		return (-1);
	return (1);
}
