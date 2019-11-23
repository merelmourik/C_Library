/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:30:22 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/20 13:54:36 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*pd;
	const unsigned char		*ps;
	size_t					i;

	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	i = 1;
	if (!dst && !src)
		return (NULL);
	if (ps < pd)
		while (i <= len)
		{
			pd[len - i] = ps[len - i];
			i++;
		}
	else
		while (len > 0)
		{
			*pd = *ps;
			pd++;
			ps++;
			len--;
		}
	return (dst);
}
