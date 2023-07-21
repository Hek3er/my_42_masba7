/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:12:22 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/21 00:25:55 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int letter_count(char c)
{
    int repeat;
    if(c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else if(c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else 
        repeat = 1;
    return (repeat);
}


int main(int ac, char *av[])
{
    int i;
    int repeat;
    i = 0;
    if (ac == 2)
    {
        while(*av[1])
        {
             repeat = letter_count(*av[1]);
             while (repeat--)
                write(1, av[1], 1);
            
            av[1]++;    
        }
    }
    ft_putchar('\n');
    return 0;
}