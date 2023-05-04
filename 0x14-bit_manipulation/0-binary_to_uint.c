#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary string to unsigned integer
 * @b: string of 0's or 1's
 *
 * return: converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	/*hold the converted number*/
	unsigned int conv_num = 0;
	/*counter to iterate through characters in the string*/
	int coun = 0;

	if (b == NULL)
		return (0);

	while (b[coun])
	{
		if (b[coun] == '0' || b[coun] == '1')
		{
			/*keep shifting through characters*/
			conv_num = conv_num << 1;
			if (b[coun] == '1')
				conv_num += 1;
		}
		else
			return (0);

		coun++;
	}
	return (conv_num);
}	
