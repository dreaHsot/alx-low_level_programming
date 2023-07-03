#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to be set
 * @to: pointer to char value to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
