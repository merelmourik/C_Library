/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 08:57:55 by mmourik       #+#    #+#                 */
/*   Updated: 2021/11/18 06:48:27 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long int	nb;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (nb >= 9223372036854775807 && sign == 1)
		return (-1);
	if (nb > 9223372036854775807 && sign == -1)
		return (-1);
	return (nb * sign);
}
