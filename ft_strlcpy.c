/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:21:09 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:21:09 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlcpy(char *destination, const char *source, unsigned int num)
{
    int j;

    j = 0;
    while (num-- > 0)
        *(destination + j) = *(source + j++);
    *(destination + j) = '\0';
    return (destination);
}
