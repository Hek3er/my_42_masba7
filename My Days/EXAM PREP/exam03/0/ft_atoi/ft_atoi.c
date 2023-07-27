/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:21:56 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/24 14:33:31 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i;
    int neg;
    int res;

    i = 0;
    neg = 1;
    res = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }  
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
           neg *= -1; 
        }
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * neg);
}