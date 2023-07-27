/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:26:28 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/27 17:33:01 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char tmp;

    i = ft_strlen(str) - 1;
    j = 0;
    while (j < i)
    {
        tmp  = str[j];
        str[j] = str[i];
        str[i] = tmp;
        j++;    
        i--;
    }
    return (str);
}
