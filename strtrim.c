/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:16:23 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/23 12:46:29 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		beg;
	size_t		end;
	char		*new;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	end = ft_strlen(s1);
	while (end > beg && ft_strchr(set, s1[beg]))
		beg++;
	if (beg == end)
		return (ft_strdup(""));
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	new = ft_substr(s1, beg, end - beg);
	return (new);
}
