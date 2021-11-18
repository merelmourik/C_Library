/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 14:55:55 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:33:11 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (*str == 0)
		return (0);
	if (c == '\0')
		return (1);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*ft_free(int i, char **word)
{
	while (i != 0)
	{
		i--;
		if (word[i])
			free(word[i]);
	}
	free(word);
	return (NULL);
}

static char	*word(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	word = (char*)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**new_string(char const *str, char c, char **arr)
{
	int i;

	i = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str)
		{
			arr[i] = word(str, c);
			if (arr[i] == NULL)
				return (ft_free(i, arr));
			i++;
			while (*str != c && *str)
				str++;
		}
	}
	return (arr);
}

char		**ft_split(char const *str, char c)
{
	char	**arr;

	if (str == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (arr == NULL)
		return (NULL);
	arr = new_string(str, c, arr);
	arr[word_count(str, c)] = NULL;
	return (arr);
}
