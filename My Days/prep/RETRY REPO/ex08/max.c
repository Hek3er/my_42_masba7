/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:53:18 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 17:01:16 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
    int max;
    unsigned int i;

    max = 0;
    i = 0;
    while (i < len)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }

    return (max);
}
