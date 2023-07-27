/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:22:55 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/26 21:33:27 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac , char *av[])
{
    long i;
    long j;
    long result;
    
    if (ac == 4)
    {
        i = atoi(av[1]);
        j = atoi(av[3]);

        if (*av[2] == '+')
            result = i + j;
        else if (*av[2] == '-')
            result = i - j;
        else if (*av[2] == '*')
            result = i * j;
        else if (*av[2] == '/')
            result = i / j;
        else 
            result = i % j;
        if (result >= -2147483648 && result <= 2147483647)
            printf("%d", (int)result);
    }
    printf("\n");
}