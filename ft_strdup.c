/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:17:45 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:17:45 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(char *str)
{
    char    *ptr;
    int len;

    ptr = (char *) malloc(len);
    len = ft_strlen(str);
    *(ptr + len) = '\0';
    while (len >= 0)
    {
        *(ptr + len) = *(str + len);
        len--;
    }
    return (ptr);
}
