/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 09:39:46 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/17 19:52:37 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*allocated;
	size_t	i;

	i = 0;
	allocated = malloc(count * size);
	if (allocated == NULL)
		return (NULL);
	while (i < (size * count))
	{
		allocated[i] = 0;
		i++;
	}
	return (allocated);
}
