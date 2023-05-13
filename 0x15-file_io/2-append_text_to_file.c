#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the nane of file.
 * @text_content: string to add to the file.
 *
 * Return: filename is Null then return -1.
 *         Otherwise, 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fin, len = 0;

    if (!filename) /*Checks if filename argu is NULL*/
        return (-1); /*NULL? -error*/

    fin = open(filename, O_WRONLY | O_APPEND); /*file descriptor operation*/

    if (fin < 0) /*Open faild?*/
        return (-1); /*Error occurred*/

    if (text_content) /*Checks if content argu is Null*/
    {
        while (text_content[len])
            len++; /*Calculates the lenght of content*/

        if (write(fin, text_content, len) != len)
        {
            close(fin);
            return (-1);
        }
    }

    close(fin); /*CLOSE the descriptor*/
    return (1);
}
