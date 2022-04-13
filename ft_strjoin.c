/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:51:32 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 14:51:32 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    int     index;
    int     index2;

    index = 0;
    result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) -1);
    while (*(s1 + index))
        *(result + index) = *(s1 + index++);
    index2 = 0;
    while (*(s2 + index))
        *(result + index) = *(s2 + index2++);
    *(result + index) = '\0';
    return (result);
}
