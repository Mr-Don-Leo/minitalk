/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:18:56 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/04 15:18:38 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Sets memory of a block to 0 no matter what
*/
void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}