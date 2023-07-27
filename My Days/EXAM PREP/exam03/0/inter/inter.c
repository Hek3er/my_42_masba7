/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:59:52 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/24 15:09:33 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int tab[127] = {0};
    
    if (ac == 3)
    {
        i = 0;
        while (av[2][i])
        {
            tab[(int)av[2][i]] = 1;
            i++;
        }
        i = 0;
        while (av[1][i])
        {
            if (tab[(int)av[1][i]] == 1)
            {
                write (1, &av[1][i], 1);
                tab[(int)av[1][i]] = 2;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return 0;
}