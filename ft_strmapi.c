/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:46:40 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 17:46:40 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     index;
    char    *result;

    //result = (char *)malloc(ft_strlen(s));
    if (!(result = ft_strdup(s)))
		return ('\0');
    index = 0;
    while (*(result + index))
        *(result + index) = (*f)(index,*(result + index));
    return (result);
}
