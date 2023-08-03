/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:57:06 by azainabi          #+#    #+#             */
/*   Updated: 2023/08/03 03:02:53 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char    *ft_strdup(char *src)
{
	char *p;
	int i;

	p = malloc(size_of(char) * ft_strlen(src) + 1);
	
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
