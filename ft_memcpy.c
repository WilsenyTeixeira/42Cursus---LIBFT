void * memcpy ( void * destination, const void * source, unsigned int num )
{
    char * string;
    char * dest;

    if (!destination)
        return (destination);
    string = (char *) source;
    dest = (char *) destination;
    while (num-- > 0)
    {
        *dest++ = *string++;
    }
    return (destination);
}
