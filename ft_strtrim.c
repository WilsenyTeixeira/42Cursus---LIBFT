/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:38:54 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 18:38:54 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
    int     start;
    int     end;
    int     index;
    char    *result;

    start = 0;
    end = ft_strlen(s1) - 1;
    while (*(s1 + start) && ft_strchr(set,*(s1 + start)))
        start++;
    while (start < end && ft_strchr(set,*(s1 + end)))
        end--;
    result = (char*)malloc(sizeof(*s1) * (end - start + 1));
    if (!result)
		return (((void *)0));
	index = 0;
	while (start <= end)
		*(result + index++) = s1[start++];
	*(result + index) = '\0';
	return (result);
}
