/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 14:55:55 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/23 12:31:15 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int		i;
	int		co;

	co = 0;
	i = 0;
	if (*s == 0)
		return (0);
	if (c == '\0')
		return (1);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			co++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (co);
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

static char	*word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char*)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**new_string(char const *s, char c, char **arr)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			arr[i] = word(s, c);
			if (arr[i] == NULL)
				return (ft_free(i, arr));
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	return (arr);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	arr = new_string(s, c, arr);
	arr[word_count(s, c)] = NULL;
	return (arr);
}
