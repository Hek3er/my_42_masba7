/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:48:39 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/23 12:42:44 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*p;

	i = 0;
	j = min;
	p = malloc ((max - min) * 4);
	if (min >= max)
	{
		return (NULL);
	}
	while (j < max)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
}
