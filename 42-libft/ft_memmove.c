/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:25 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 15:41:43 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * function copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap, but copying is done in a non-destructive manner.
 * Which is done in reverse order.
 */
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    if (!dest1 && !src1)
       return (NULL);
    if (dest < src)
        ft_memcpy(dest, src, n);
    else 
    {
        while (n--)
        {
            *(dest1 + n) = *(src1 + n);
        }
    }
    return (dest1);
}