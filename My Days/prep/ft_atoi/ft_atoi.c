/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 04:10:32 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 04:15:29 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i;
    int ret;
    int neg;

    i = 0;
    neg = 1;
    ret = 0;
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
        ret = ret * 10 + (str[i] - 48);
        i++;
    }
    return (neg * ret);
}
