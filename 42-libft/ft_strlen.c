/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:23:01 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 01:38:48 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Code loops through a string of characters, for each character it
// increments index, at the end once the loop reaches Null it returns index
size_t ft_strlen(const char *str)
{
    size_t index;

    index = 0;
    while (str[index] != '\0')
        index++;
    return (index);
}

