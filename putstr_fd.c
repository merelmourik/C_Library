/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putstr_fd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:45:18 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:30:20 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
