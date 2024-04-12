/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:23:22 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/16 11:23:24 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index2;

	index = 0;
	index2 = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0' && index < len)
	{
		if (haystack[index] == needle[0])
		{
			while (haystack[index + index2] == needle[index2]
				&& index2 + index < len)
			{
				if (needle[index2 + 1] == '\0')
					return ((char *)&haystack[index]);
				index2++;
			}
		}
		index++;
	}
	return (NULL);
}
