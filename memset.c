/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:25:01 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:29:33 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int i, size_t len)
{
	unsigned char	*d;
	int				j;

	d = (unsigned char*)b;
	j = 0;
	while (len > 0)
	{
		d[j] = (unsigned char)i;
		j++;
		len--;
	}
	return (b);
}
