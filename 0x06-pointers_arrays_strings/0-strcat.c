#include "main.h"

char *_strcat(char *dest, char *src)
{
    int y;
    int j;

    y = 0;
    j = 0;
    while (dest[y] != '\0')
    {
        y++;
    }
    while (src[j] != '\0')
    {
        dest[y] = src[j];
        y++;
        j++;
    }
    dest[y] = '\0';
    return (dest);
}
