#include "main.h"

/**
 * set_string - set the value of a pointer to a character
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
