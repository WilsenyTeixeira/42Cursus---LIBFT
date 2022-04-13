/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:51:26 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/11 14:51:26 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_substr(char const *s, unsigned int start, unsigned int len)
{
    char    *result;
    int     index;

    index = 0;
    result = (char *)malloc(len + 1);
    while (*(s + index))
        *(result + index) = *(s + index++);
    *(result + index) = '\0';
    return (result);
}
