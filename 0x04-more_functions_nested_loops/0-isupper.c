#include "main.h"
/**
 * _isupper - Checks for uppercase character
 *@c: The character to be checked
 * Return: 1 (True - uppercase) OR 0 (False - lowecase)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
