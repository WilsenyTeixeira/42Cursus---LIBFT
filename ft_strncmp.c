int strncmp ( const char * str1, const char * str2, unsigned int num )
{
    int str;

    str = 0;
    while (num-- > 0)
    {
        if (*(str1 + str) == *(str2 + str))
            str++;
        else
            return ((int) *(str1 + str) - *(str2 + str));

    }
    return ((int) *(str1 + str) - *(str2 + str));
}
