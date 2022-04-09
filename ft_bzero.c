/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:38:46 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:38:46 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_bzero(void *s, unsigned int n)
{
    int i;
    char    *c;

    if (!s)
        return ;
    i = 0;
    c = (char *)s;
    while (*(c + i))
        *(c + i++) = '\0';
}
