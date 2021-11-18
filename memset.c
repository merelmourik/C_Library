/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:25:01 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/18 17:53:27 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	int				i;

	d = (unsigned char*)b;
	i = 0;
	while (len > 0)
	{
		d[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
