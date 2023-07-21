/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 03:53:17 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/21 04:21:06 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    int j = 1;
    int T[127] = {0};
    if (ac == 3)
    {
        while (j < 3)
        {
            while (av[j][i])
                T[(int)av[j][i++]] = 1;
            
            i = 0;
            j++;
        }
        j = 1;
        while (j < 3)
        {
            while(av[j][i])
            {
                if (T[(int)av[j][i]] == 1)
                {
                    write(1, &av[i][j], 1);
                    T[(int)av[j][i]] = 2;
                }
                i++;
            }
            i = 0;
            j++;   
        }
    }
    write(1, "\n", 1);
    return 0;
}