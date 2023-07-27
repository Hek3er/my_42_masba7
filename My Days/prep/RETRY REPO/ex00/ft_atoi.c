/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:44:24 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 15:48:34 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(const char *str)
{
    int i;
    int neg;
    int ret;

    i = 0;
    ret = 0;
    neg = 1;

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
        ret = ret *10 +(str[i] - 48);
        i++;
    }
    return (ret *neg);
}
