/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:23:42 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:23:42 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, unsigned int num)
{
    int str;

    str = 0;
    while (num-- > 0)
    {
        if (*(str1 + str) == *(str2 + str))
            str++;
        else
            return ((int) *(str1 + str) - *(str2 + str));

    }
    return ((int) *(str1 + str) - *(str2 + str));
}
