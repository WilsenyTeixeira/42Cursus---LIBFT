char * strlcpy ( char * destination, const char * source, unsigned int num)
{
    int j;

    j = 0;
    while (num-- > 0)
        *(destination + j) = *(source + j++);
    *(destination + j) = '\0';
    return (destination);
}
