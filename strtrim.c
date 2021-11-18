/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strtrim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:16:23 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:38:39 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str1, char const *set)
{
	size_t		beg;
	size_t		end;
	char		*new;

	if (!str1 || !set)
		return (NULL);
	beg = 0;
	end = ft_strlen(str1);
	while (end > beg && ft_strchr(set, str1[beg]))
		beg++;
	if (beg == end)
		return (ft_strdup(""));
	while (end > 0 && ft_strchr(set, str1[end - 1]))
		end--;
	new = ft_substr(str1, beg, end - beg);
	return (new);
}
