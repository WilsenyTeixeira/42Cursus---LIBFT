char * strchr (char * str, int character )
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if(*(str + i) == character)
            return (str);
        i++;
    }
}