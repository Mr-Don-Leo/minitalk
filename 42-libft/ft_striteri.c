/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:51:32 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 15:59:48 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_striteri applies the function 'f' to each character of the string 's'
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	index;

	index = 0;
	if (!s)
		return ;
	while (index < ft_strlen(s))
	{
		(*f)(index, &s[index]);
		index++;
	}
}
