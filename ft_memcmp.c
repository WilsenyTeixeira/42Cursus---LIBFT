int memcmp ( const void * ptr1, const void * ptr2, unsigned int num )
{
    char    *ptr1_a;
    char    *ptr2_a;

    ptr1_a = ptr1;
    ptr2_a = ptr2;
    while (num-- > 0)
    {
        if (*ptr1_a == *ptr2_a)
        {
            ptr1_a++;
            ptr2_a++;
        }
        else
            return (*ptr1_a - *ptr2_a);
    }
    return (*ptr1_a - *ptr2_a);
}
