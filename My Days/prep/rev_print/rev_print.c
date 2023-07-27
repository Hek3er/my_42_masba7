/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:33:51 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 02:53:03 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_stlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_rev_print (char *str)
{
    int i;

    i = ft_stlen(str) - 1;
    while (str[i])
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (str);
}
