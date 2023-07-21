/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 02:17:07 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/21 03:17:56 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(const char *str)
{
    int i = 0;
    int ret = 0;
    int neg = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            neg *= -1;
        }
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        ret = ret * 10 + str[i] - 48;
        i++;
    }
    return (ret * neg);
}

int main ()
{
    const char str[] = "  --14562a89";
    printf("%d", ft_atoi(str));
}