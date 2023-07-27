/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 03:02:53 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 03:12:02 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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


char    *ft_strrev(char *str)
{
    int len;
    int j;
    int tmp;
    
    j = 0;
    len = ft_strlen(str) - 1;
    while (len > j)
    {
        tmp = str[len];
        str[len] = str[j];
        str[j] = tmp;
        j++;
        len--;
    }
    return (str);
}
