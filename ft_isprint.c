int ft_isprint(char c){
    if(c > 31  && c <  128)
        return (1);
    else
        return (0);
}