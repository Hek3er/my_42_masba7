/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:28:44 by azainabi          #+#    #+#             */
/*   Updated: 2023/08/03 03:33:27 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;
	int i;

	i = 1;
	max = tab[0];
	if (len == 0)
	{
		return (0);
	}
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
