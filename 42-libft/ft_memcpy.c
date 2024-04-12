/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:32:26 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/06 18:33:02 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * function copies n bytes from memory area src to memory area dst.
 */
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t index;
    unsigned char *dst1;
    unsigned char *src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
    index = 0;
    if (!dst1 && !src1)
        return (0);
    while (index < n)
    {
        dst1[index] = src1[index];
        index++;
    }
    return (dst);
}