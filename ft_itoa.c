/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:43:00 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 17:43:00 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_reverse(char *ptr)
{
    int len;
    int index;

    index = 0;
    len = ft_strlen(ptr) -1;
    while (index < len)
    {
        *(ptr + index) = *(ptr + len);
        index++;
        len--;
    }
}

char    *ft_itoa(int n)
{
    char *result;
    int index;
    int number;

    result = (char *)malloc(11);
    index = 0;
    while (n>=0)
    {
        number = n % 10;
        *(result + index) = number + '0';
        n /= 10;
    }
    ft_reverse(result);
    return result;
}
