/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:38:43 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 18:38:43 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strchr(const char *str, int character)
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if(*(str + i) == character)
            return (i);
        i++;
    }
    return (-1);
}

char **ft_split(char const *s, char c)
{
    char    **result;
    int     qty;
    int     index;
    int     start;
    int     i;

    i = 0;
    index = 0;
    qty = 0;
    start = 0;
    while (*(s + index))
    {
        if (*(s + index++) == c)
            qty++;
    }
    result = (char **)malloc(qty + 2);
    if (!result)
		return (NULL);
    index = 0;
    while(*(s + index))
    {
        if (*(s + index) == c)
        {
            *(result + i) = ft_substr(s, start, (index - start));
            if (!(*(result + i)))
                return (NULL);
            start = index + 1;
            i++;
        }
        index++;
    }
    *(result + i) = 0;
    return (result);
}
