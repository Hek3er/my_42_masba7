/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:47:25 by azainabi          #+#    #+#             */
/*   Updated: 2023/08/03 03:52:24 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int i;
	long v1;
	long v2;
	long result;

	i = 0;
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
