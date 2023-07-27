/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:56:21 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/24 16:19:12 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int ac, char *av[])
{
    int i;

    i = ft_strlen(av[1]) - 1;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
        {
            i--;
        }
        while (av[1][i] != ' ' || (av[1][i] < 9 && av[1][i] > 13))
        {
            i--;
        }
        i += 1;
        while (av[1][i] != '\0' && av[1][i]!= ' ' || (av[1][i] < 9 && av[1][i] > 13))
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}