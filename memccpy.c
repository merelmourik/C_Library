/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memccpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:33:05 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:28:01 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int i, size_t n)
{
	unsigned char	d;
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			j;

	j = 0;
	d = (unsigned char)i;
	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	while (n > 0)
	{
		pd[j] = ps[j];
		if (ps[j] == d)
			return (dst + j + 1);
		n--;
		j++;
	}
	return (NULL);
}
