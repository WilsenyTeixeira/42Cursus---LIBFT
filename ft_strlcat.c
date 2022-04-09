char * strlcat ( char * destination, const char * source, unsigned int num)
{
    int i;
    int j;

    j = 0;
    i = strlen(destination) - 1;
    while (num-- > 0)
        *(destination + i++) = *(source + j++);
    *(destination + i++) = '\0';
    return (destination);
}