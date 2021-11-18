/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:08:00 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/14 17:53:47 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	char	*str;
	int		len;

	str = (char*)s;
	len = ft_strlen(str);
	d = (char)c;
	while (str[len] != d && len > 0)
		len--;
	if (str[len] == d)
		return (&str[len]);
	return (NULL);
}
