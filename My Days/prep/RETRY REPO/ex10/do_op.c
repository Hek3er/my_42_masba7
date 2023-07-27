/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:13:05 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 17:19:18 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char *av[])
{
    long v1;
    long v2;
    long result;
    
    if (ac == 4)
    {
        v1 = atoi(av[1]);
        v2 = atoi(av[3]);
        if (*av[2] == '+')
        {
            result = v1 + v2;
        }
        else if (*av[2] == '-')
        {
            result = v1 - v2;
        }
        else if (*av[2] == '*')
        {
            result = v1 * v2;
        }
        else if (*av[2] == '/')
        {
            result = v1 / v2;
        }
        else 
            result = v1 % v2;
        printf("%d", (int)result);
    }
    printf("\n");
}