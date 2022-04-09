/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-souz <wde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:52:31 by wde-souz          #+#    #+#             */
/*   Updated: 2022/04/09 16:52:31 by wde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
    int i;
    int no_negative;
    int result;
    
    i = 0;
    no_negative = 1;
    result = 0;
    if (!str)
		return (0);
	while (*(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\v' ||
			*(str + i) == '\f' || *(str + i) == '\r' || *(str + i) == ' ')
        i++;
    if (*(str + i) == '-')
    {
        no_negative == 0;
        i++;
    }
    else if (*(str + i) == '+')
        i++;
    while (*(str + i) >= '0' && *(str + i) <= '9')
		result = (result * 10) + (*(str + i++) - '0');
	return (result * no_negative);
}
