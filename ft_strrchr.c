char * strchr (char * str, int character )
{
    int i;

    i = strlen(str) - 1;
    while (*(str + i))
    {
        if(*(str + i) == character)
            return (str);
        i--;
    }
}