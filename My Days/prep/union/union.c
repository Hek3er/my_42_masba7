/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 03:54:58 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 04:01:23 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int j;
    int T[127] = {0};

    if (ac == 3)
    {
        i = 1;
        while (i < 3)
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                if (T[(int)av[i][j]] == 0)
                {
                    write(1, &av[i][j], 1);
                    T[(int)av[i][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}