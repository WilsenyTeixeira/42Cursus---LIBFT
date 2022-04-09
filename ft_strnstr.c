char * strnstr(const char	*big, const char *little, unsigned int len)
{
    int index_aux;
    int index_big;
    int index_little;

    index_big = 0;
    index_little = 0;
    index_aux = 0;
    while (len-- > 0)
    {
        while (*(little + index_little))
        {
            if (*(little + index_little) == *(big + index_big))
            {
                index_big++;
                index_little++;
            }

        }
        
    }
    
}