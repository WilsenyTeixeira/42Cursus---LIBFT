/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:16:40 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:16:40 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlern(const char *string)
{
    int length;

    length = 0;
    while (*string)
    {
        length++;
        string++;
    }
    return (length);
}
