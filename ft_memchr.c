/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:21:39 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/18 17:55:20 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	d;

	ps = (unsigned char*)s;
	d = (unsigned char)c;
	while (n > 0)
	{
		if (*ps == d)
			return (ps);
		ps++;
		n--;
	}
	return (NULL);
}
