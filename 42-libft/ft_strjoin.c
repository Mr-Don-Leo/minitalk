/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:56:42 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 16:56:47 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strjoin allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	index;
	size_t	index2;

	if (!s1 || !s2)
		return (NULL);
	index = 0;
	index2 = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[index] != '\0')
	{
		str[index] = s1[index];
		index++;
	}
	while (s2[index2] != '\0')
	{
		str[index + index2] = s2[index2];
		index2++;
	}
	str[index + index2] = '\0';
	return (str);
}
