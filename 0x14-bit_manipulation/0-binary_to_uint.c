#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned integer
 * @b: pointer refers to a string of 0's and 1's
 *
 * Return: the converted number otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	/* declare converted number variable */
	unsigned int conv_num = 0;
       /* iterate through string characters using for loop */
       int counter = 0;

       /* make sure of the nature of string */
       if (b == NULL)
	       return (0);

       while (b[counter])
       {
	       if (b[counter] == '0' || b[counter] == '1')
	       {
		       conv_num = conv_num << 1; /* shifts from char to another */
		       if (b[counter] == '1')
			   conv_num += 1;
	       }
	       else
		       return (0);

	       counter++;
       }

       return (conv_num);
}
