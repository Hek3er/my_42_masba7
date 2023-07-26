/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:44:04 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/26 12:13:11 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*iner;
	int	len;

	i = 0;
	j = min;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	iner = (int *)malloc(len * sizeof(int));
	if (iner == NULL)
		return (-1);
	while (j < max)
	{
		iner[i] = j;
		i++;
		j++;
	}
	*range = iner;
	return (i);
}
