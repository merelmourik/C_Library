/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:53:43 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/22 11:04:48 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int		res;

	res = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = (unsigned int)(n * -1);
	}
	else
		res = (unsigned int)n;
	if (res >= 10)
		ft_putnbr_fd(res / 10, fd);
	ft_putchar_fd((char)(res % 10 + '0'), fd);
}
