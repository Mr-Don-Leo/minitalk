/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:38:38 by mbabayan          #+#    #+#             */
/*   Updated: 2024/04/03 12:27:51 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Atoi converts String/Char to Int, it skips all the whitespaces
which is seen in line 21, and then it checks for a positive or
negative symbol [23]. From which it then it looked through only digits,
converting them from a char to an int but subtracting the Ascii zero
which is 48 [27]. If there are more than one digits, it loops and multiplies
it by ten to move the already held value over for another digit.
*/
static int	overflow_handling(const char *str, int sign)
{
	long	number;
	long	temp;
	int		index;

	index = 0;
	number = 0;
	while (str[index] >= 48 && str[index] <= 57)
	{
		temp = number;
		number = number * 10 + (str[index] - 48);
		if (temp > number)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		index++;
	}
	return (number * sign);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;

	index = 0;
	sign = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		++index;
	if (str[index] == 92)
		return (0);
	if (str[index] == 45 && ++index)
		sign = -1;
	else if (str[index] == 43)
		++index;
	return (overflow_handling(str + index, sign));
}
