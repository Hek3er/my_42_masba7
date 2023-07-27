/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:02:07 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 17:11:04 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{
    int i;
    char *tmp;

    i = 0;
    tmp = av[1];
    if (ac == 3)
    {
        while (*tmp && *av[2])
        {
            while (*tmp == *av[2] && (*tmp && *av[2]))
            {
                tmp++;
                av[2]++;
            }
            av[2]++;
        } 
        if (!(*tmp))
        {
            ft_putstr(av[1]);
        }
    }
    
    write(1, "\n", 1);
}