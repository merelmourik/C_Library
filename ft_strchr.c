/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:45:35 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/08 16:03:25 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *p;

	p = (char*)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == '\0' && c == '\0')
		return (p);
	return (NULL);
}
