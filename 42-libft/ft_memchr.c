/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:05:54 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/08 17:38:16 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * function locates the first occurrence of c in string s, until n bytes.
 */
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t index;

    index = 0; 
    while(index < n)
    {
        if (((unsigned char *)s)[index] == (unsigned char)c)
            return((void *)&s[index]);
        index++;
    }
    return (0);
}
