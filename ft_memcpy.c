/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:07:55 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:07:55 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *destination, const void *source, unsigned int num)
{
    char *string;
    char *dest;

    if (!destination)
        return (destination);
    string = (char *) source;
    dest = (char *) destination;
    while (num-- > 0)
    {
        *dest++ = *string++;
    }
    return (destination);
}
