/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:09:41 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:09:41 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *destination, const void *source, unsigned int num)
{
    char    *string;
    char    *dest;

    if (!destination)
        return (destination);
    string = (char *) source;
    dest = (char *) destination;
    num--;
    while (num >= 0)
    {
        if (*(dest + num))
            *(dest + num) = *(string + num);
        num--;
    }
    return (destination);
}