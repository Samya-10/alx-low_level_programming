#include<unistd.h>

/**
* _putchar - writes a character to stdout
* @c: name of the character
* Return: 1 (Success)
* -1 for errors
*/

int _putchar(char c)
{

return (write(1, &c, 1));
}
