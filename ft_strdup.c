#include <stdlib.h>
char *  strdup (char * str)
{
    char * ptr;
    int len;

    ptr = (char *) malloc(len);
    len = ft_strlen(str);
    *(ptr + len) = '\0';
    while (len >= 0)
    {
        *(ptr + len) = *(str + len);
        len--;
    }
    return (ptr);
}
