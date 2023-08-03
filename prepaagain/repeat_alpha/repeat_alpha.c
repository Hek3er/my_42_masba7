/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 01:56:08 by azainabi          #+#    #+#             */
/*   Updated: 2023/08/03 02:10:11 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count(char str)
{
	int result;

	if (str >= 'A' && str <= 'Z')	
	{
		result = str - 'A' + 1;
	}
	if (str >= 'a' && str <= 'z')
	{
		result = str - 'a' + 1;
	}
	else 
		result = 1;
	
	
	return (result);
}

int main(int ac, char *av[])
{
	int i;
	int repeat;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			repeat = count(av[1][i]);
			while (repeat--)
			{
				write(1, &av[1][i], 1);
			}
			i++;	
		}
	}
	write(1, "\n", 1);
}
