/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:13:47 by azainabi          #+#    #+#             */
/*   Updated: 2023/08/02 21:09:25 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	cat(char	*string, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i > 0 && strs[i] != NULL)
			ft_strcat(string, sep);
		if (strs[i] != NULL)
			ft_strcat(string, strs[i]);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	int		string_len;
	char	*empty_str;

	i = 0; 
	if (size <= 0 || strs == NULL)
	{
		empty_str = (char *)malloc(1);
		empty_str[0] = '\0';
		return (empty_str);
	}
	string_len = (ft_strlen(sep) * (size - 1));
	while (i < size)
	{
		if (strs[i] != NULL)
			string_len += ft_strlen(strs[i]);
		i++;
	}
	string_len++;
	string = (char *)malloc(string_len);
	string[0] = '\0';
	cat(string, size, strs, sep);
	return (string);
}
