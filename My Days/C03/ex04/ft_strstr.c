/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:08:29 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/17 22:19:19 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
  while (str[i] != '\0')
  {
    while (to_find[j]  != '\0')
    {
      if (str[i + j] != to_find[0])
        break;
      else 
        return (&str[i]);
      j++;
    }
    i++;
  }
	str[i] = '\0';
	return (str);
}

int main(void) 
{
  char str[] = "This is the way.";
  char to_find[] = "wa";
  

  //char *the = strstr(str, to_find);
  char *tha = ft_strstr(str, to_find);
  printf("the: %s\n" , tha);
  printf("the: %s\n" , tha);

  return 0;
}
