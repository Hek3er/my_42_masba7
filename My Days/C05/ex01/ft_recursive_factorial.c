/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:05:32 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/19 03:02:17 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    else if (nb < 0)
    {
        return (0);
    }
    else
        return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
    printf("%d", ft_recursive_factorial(-10));
    return (0);
}
*/