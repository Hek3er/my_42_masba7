/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:30:09 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 14:41:17 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int ft_atoi(char *str)
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
            neg *= -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        ret = ret * 10 + (str[i] - 48);
        i++;
    }
    return (ret *neg);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
    
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}

void ft_count_prime(int n)
{
    int i;
    int count;

    i = 2;
    count = 0;
    if (n == 1)
    {
        count = 1;
    }
    while (i <= n)
    {
        if (ft_is_prime(i))
            count += i;  
        i++; 
    }
    ft_putnbr(count); 
}


int main(int ac, char *av[])
{
    
    if (ac == 2 && ft_atoi(av[1]) > 0)
    {
        ft_count_prime(ft_atoi(av[1]));
    }
    else 
        ft_putchar('0');
    write(1, "\n", 1);
}