/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:50:49 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:53 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *string, char separator)
{
	int	index;
	int	count;
	int	letter_check;

	index = 0;
	count = 0;
	letter_check = 0;
	while (string[index])
	{
		if (string[index] != separator)
			letter_check++;
		else if (string[index] == separator && letter_check != 0)
		{
			count++;
			letter_check = 0;
		}
		if (string[index] != separator && string[index + 1] == '\0')
			count++;
		index++;
	}
	return (count);
}

static void	add_string_to_list(char **result, char const *string,
		char separator)
{
	size_t	index;
	size_t	letter_count;
	size_t	word_count;

	index = 0;
	word_count = 0;
	while (string[index] != '\0')
	{
		letter_count = 0;
		while (string[index + letter_count] && string[index
			+ letter_count] != separator)
			letter_count++;
		if (letter_count > 0)
		{
			result[word_count] = ft_substr(string, index, letter_count);
			word_count++;
			index += letter_count;
		}
		else
			index++;
	}
	result[word_count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int count;
	char **result;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	add_string_to_list(result, s, c);
	return (result);
}