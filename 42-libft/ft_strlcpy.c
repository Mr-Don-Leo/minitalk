/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:19:54 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/12 14:03:00 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strlcpy copies up to dstsize - 1 characters from the string src to dst.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	if (dstsize == 0)
		return (ft_strlen(src));
	index = 0;
	while (src[index] && index < dstsize - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
