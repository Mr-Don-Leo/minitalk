/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:09:59 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 12:10:02 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * Function allocates sufficient memory for a copy of a string.
 */
char	*ft_strdup(const char *s)
{
	char	*string_copy;
	int		index;

	index = 0;
	string_copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!string_copy)
		return (NULL);
	while (s[index])
	{
		string_copy[index] = s[index];
		index++;
	}
	string_copy[index] = '\0';
	return (string_copy);
}
