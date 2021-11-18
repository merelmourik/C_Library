/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:33:05 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/17 20:05:13 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	d;
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	i = 0;
	d = (unsigned char)c;
	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	while (n > 0)
	{
		pd[i] = ps[i];
		if (ps[i] == d)
			return (dst + i + 1);
		n--;
		i++;
	}
	return (NULL);
}
