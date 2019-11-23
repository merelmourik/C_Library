/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 08:59:00 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/12 13:28:58 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0' && len > 0)
	{
		i = 0;
		while (haystack[j] == needle[i] && len > 0 && haystack[j] != '\0')
		{
			j++;
			i++;
			len--;
			if (needle[i] == '\0')
				return ((char*)&haystack[j - i]);
			if (haystack[j] != needle[i])
				len = len + i;
		}
		j = j - i;
		j++;
		len--;
	}
	return (NULL);
}
