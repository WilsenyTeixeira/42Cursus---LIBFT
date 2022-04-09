/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:01 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:00:01 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *ptr, int value, unsigned int num)
{
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
