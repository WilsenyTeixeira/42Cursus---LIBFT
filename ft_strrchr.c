/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:26:54 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:26:54 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strchr(const char *str, int character)
{
    int i;

    i = strlen(str) - 1;
    while (*(str + i))
    {
        if (*(str + i) == character)
            return (str);
        i--;
    }
}
