/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:49:14 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 15:56:06 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *p;
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    p = malloc(i + 1);
    i = 0;
    while (src[i] != '\0')
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}
