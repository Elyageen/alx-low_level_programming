#include <unistd.h>

/**
* _puchar - write the character to stdout
* @c: the chracter to print
*
* return: on success1
* on error -1 is returned and errno is set appropariataely
*/
int _putchar(char c)
{
    return (write(1,&c,1));
}

