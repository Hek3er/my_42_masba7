/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:00:35 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/26 23:14:06 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int max;

    if (len > 0)
    {
        max = tab[--len];
        while (len--)
        {
            if (tab[len] > max)
                max = tab[len];
        }
        return (max);
    }
    return (0);
}
