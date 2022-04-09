/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:18:56 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:18:56 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strlcat(char *destination, const char *source, unsigned int num)
{
    int i;
    int j;

    j = 0;
    i = ft_strlen(destination) - 1;
    while (num-- > 0)
        *(destination + i++) = *(source + j++);
    *(destination + i++) = '\0';
    return (destination);
}
