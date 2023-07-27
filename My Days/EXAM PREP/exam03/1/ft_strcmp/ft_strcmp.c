/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:35:44 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/26 21:39:49 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    
    while (s1[i] = '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}