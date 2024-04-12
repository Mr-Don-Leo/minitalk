/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:30:17 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 17:11:15 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Calloc function first checks if size is available 
while the size max divided by size is less than count.
(Size max / size would show the greatest amount of possible counts)
After the check, it multiplies count by size and assigns it to index
(The multiplication totals the maximum amount of memory we require)
from which it then mallocs the value of index to output.
If the output is true and available, it sets the memory using memset. 
*/
void *ft_calloc(size_t count, size_t size)
{
    size_t index;
    void *output;

    if (size && SIZE_MAX / size < count)
        return (NULL);
    index = count * size;
    output = malloc(index);
    if (!output)
        return (NULL);
    ft_memset(output, 0, index);
    return (output);
}



