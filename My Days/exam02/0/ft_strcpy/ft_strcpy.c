/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:03:40 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/21 00:08:53 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
 int i;

 i = 0;
 while(s2[i] != '\0')
 {
    s1[i] = s2[i];
    i++;
 }
 s1[i] = '\0';
 return (s1);
    
}
