/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:29:41 by azainabi          #+#    #+#             */
/*   Updated: 2023/07/24 17:05:35 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);    
}
/*
int main()
{
    unsigned char octet = 65;
    printf("%u", swap_bits(octet));
}
*/

//65 = 0100.0001
//20 = 0001.0100