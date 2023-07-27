/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:46:50 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 16:52:06 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char *av[])
{
    int i;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = 'Z' - (av[1][i] - 'A');
            }
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = 'z' - (av[1][i] - 'a');
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}