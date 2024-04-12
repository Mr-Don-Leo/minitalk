/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:07:14 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/04 11:01:35 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * function returns the length of the number
 */
static int	number_length(int num)
{
	int	count;

	count = 1;
	if (num < 0)
		count++;
	while (num / 10)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/*
 * Function converts an integer to a string, by first checking
 * if the number is negative, then it allocates memory for the string
 * and then it converts the number to a string by using the modulo
 */
char	*ft_itoa(int n)
{
	char	*number_string;
	int		number_len;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number_len = number_length(n);
	number_string = (char *)malloc(sizeof(char) * (number_len + 1));
	if (!number_string)
		return (NULL);
	index = number_len - 1;
	if (n == 0)
		number_string[0] = '0';
	while (n)
	{
		if (n < 0)
		{
			number_string[0] = '-';
			n *= -1;
		}
		number_string[index--] = (n % 10) + '0';
		n /= 10;
	}
	number_string[number_len] = '\0';
	return (number_string);
}
