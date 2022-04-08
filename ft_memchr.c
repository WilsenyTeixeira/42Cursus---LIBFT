void * memchr (void * ptr, int value, unsigned int num ){
    char    *ptr_chr;

    ptr_chr = (char*) ptr;
    while (value-- > 0 )
    {
        if (*ptr_chr == num)
        {
            return (ptr_chr);
        }
        ptr_chr++;
    }
}
