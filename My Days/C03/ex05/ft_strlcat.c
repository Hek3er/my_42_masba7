/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:12:47 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/28 23:22:48 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = 0;
	slen = 0;
	while (src[slen] != 0)
		slen++;
	while (dest[dlen] != 0)
		dlen++;
	if (size <= dlen)
		return (size + slen);
	size = size - dlen;
	if (size != 0)
	{
		while (src[i] != 0 && (size - 1) != 0)
		{
			dest[dlen + i] = src[i];
			i++;
			size--;
		}
		dest[dlen + i] = 0;
	}
	return (dlen + slen);
}
