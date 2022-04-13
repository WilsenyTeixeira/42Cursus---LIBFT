/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:38:31 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 18:38:31 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_printINT_MIN(int fd)
{
    ft_putchar_fd('-', fd);
    ft_putchar_fd('2', fd);
    ft_putchar_fd('1', fd);
    ft_putchar_fd('4', fd);
    ft_putchar_fd('7', fd);
    ft_putchar_fd('4', fd);
    ft_putchar_fd('8', fd);
    ft_putchar_fd('3', fd);
    ft_putchar_fd('6', fd);
    ft_putchar_fd('4', fd);
    ft_putchar_fd('8', fd);
}

void    ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		is_negative;
	int		index;

    is_negative = n < 0 ? 1 : 0;
	ft_bzero(str, 13);
	if (n == 0)
    {
        str[0] = '0';
        write(fd, &str[0], 1);
    }
    else if (n = -2147483648)
    {
        ft_printINT_MIN(fd);
    }
    else
    {
        if (n < 0)
            n *= -1;
        index = 0;
        while (n != 0)
        {
            str[index] = '0' + (n % 10);
            n /= 10;
            index++;
        }
        if (is_negative)
            str[index] = '-';
        while (--index >= 0)
            ft_putchar_fd(&str[index], fd);
    }
}
