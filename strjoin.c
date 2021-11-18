/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strjoin.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 10:32:29 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:36:27 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t		i;
	size_t		j;
	char		*new;

	if (!str1 || !str2)
		return (NULL);
	new = (char*)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (new == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < ft_strlen(str1))
	{
		new[j] = str1[j];
		j++;
	}
	while (i < ft_strlen(str2))
	{
		new[j + i] = str2[i];
		i++;
	}
	new[j + i] = '\0';
	return (new);
}
