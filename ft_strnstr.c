/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:24:46 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:24:46 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strnstr(const char *big, const char *little, unsigned int len)
{
    int index_aux;
    int index_big;
    int index_little;
    int status;

    index_big = 0;
    index_little = 0;
    index_aux = 0;
    status = 0;
    while (len-- > 0)
    {
        index_big = index_aux;
        while (*(little + index_little))
        {
            if (*(little + index_little) == *(big + index_big))
            {
                index_big++;
                index_little++;
                status = 1;
            }
            else
                status = 0;
        }
        if (status)
            return(big + index_aux);
        else
            index_little = 0;
            index_aux++;
    }
}
