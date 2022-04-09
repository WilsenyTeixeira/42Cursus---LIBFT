/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:46:09 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:46:09 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(unsigned int num, unsigned int size)
{
    void    *ptr;
    
    ptr = (void *)malloc(num * size);
    if (!ptr)
        return ;
    ft_bzero(ptr, num);
    return (ptr);
}
