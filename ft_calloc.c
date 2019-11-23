/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 09:39:46 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/14 13:34:16 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*allocated;
	size_t	i;

	i = 0;
	allocated = malloc(count * size);
	if (allocated == 0)
		return (0);
	while (i < (size * count))
	{
		allocated[i] = 0;
		i++;
	}
	return (allocated);
}
