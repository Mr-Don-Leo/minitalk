/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:37:41 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 01:38:35 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat appends src to dst, overwriting the initial terminating null,
 * and then adds a terminating null. The string in dst must be large enough
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dstlen;
    size_t  srclen;
    size_t  index;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (dstlen >= dstsize)
        return (srclen + dstsize);
    index = 0;
    while (index < dstsize - dstlen - 1 && src[index])
    {
        dst[dstlen + index] = src[index];
        index++;
    }
    dst[dstlen + index] = '\0';
    return (srclen + dstlen);
}
