/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putendl_fd.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:50:34 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:29:55 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
