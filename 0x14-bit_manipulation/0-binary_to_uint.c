#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned integer.
 * @b: pointer refers to a string of 0's and 1's.
 *  
 * Return: the converted number otherwise return 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int counter = 0;

       if (b == NULL)
	       return (0);

       while (b[counter])
       {
	       if (b[counter] == '0' || b[counter] == '1')
	       {
		       conv_num = conv_num << 1;
		       if (b[counter] == '1')
			   conv_num += 1;
	       }
	       else
		       return (0);

	       counter++;
       }

       return (conv_num);
}
