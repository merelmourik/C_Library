/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   substr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 10:21:20 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:39:07 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str) - start)
		len = ft_strlen(str) - start;
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (len != i && str[start + i] != 0)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
