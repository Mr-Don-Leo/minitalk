/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:25 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/16 10:47:45 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t index;
    size_t str_len;
    char *dest;

    index = 0;
    str_len = ft_strlen(s);
	if (start > (unsigned int)str_len)
		return (ft_strdup(""));
    if (len > str_len - start)
        len = str_len - start;
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (!dest || !s)
        return (NULL);
    while (index < len)
    {
        dest[index] = s[start + index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}

