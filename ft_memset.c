void * memset ( void * ptr, int value, unsigned int num )
{
    char * ptr_a;

    ptr_a = ptr;
    while (num-- > 0)
    {
        ptr_a = value;
        ptr_a++;
    }
}
