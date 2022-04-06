int ft_strlern(char *string){
    int length;

    length = 0;
    while (*string)
    {
        length++;
        string++;
    }
    return (length);
}