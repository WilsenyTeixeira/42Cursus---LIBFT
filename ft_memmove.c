void * memmove ( void * destination, const void * source, unsigned int num )
{
    char * string;
    char * dest;

    if (!destination)
        return (destination);
    string = (char *) source;
    dest = (char *) destination;
    num--;
    while (num >= 0)
    {
        if (*(dest + num))
            *(dest + num) = *(string + num);
        num--;
    }
    return (destination);
}