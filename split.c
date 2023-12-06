/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:58:19 by tsadouk           #+#    #+#             */
/*   Updated: 2023/12/05 17:58:19 by tsadouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_split(char **result, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char *get_next_word(char *s, char c) // Potential problem here
{
	static int	index = 0;
	char		*result;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[index] == c)
		index++;
	while (s[index + len] && s[index + len] != c)
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[index] != c && s[index])
	{
		result[i] = s[index];
		i++;
		index++;
	}
	result[i] = '\0';
	return (result);
}

char	**split(char *s, char c)
{
	char	**result;
	int		words_count;
	int		i;

	words_count = count_words(s, c);
	if (!words_count)
		exit(1);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result[i] = malloc(1);
			if (!result[i])
				return (free_split(result, i));
			result[i++][0] = '\0';
		}
		result[i++] = get_next_word(s, c);
	}
	result[i] = NULL;
	return (result);
}