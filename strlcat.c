/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:00:36 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/20 13:03:07 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ltotal;
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	i = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	ltotal = ldst + lsrc;
	if (dstsize > ldst)
	{
		while (src[i] && i < (dstsize - ldst - 1) && dst[ldst] != src[i])
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = '\0';
		return (ltotal);
	}
	return (lsrc + dstsize);
}
