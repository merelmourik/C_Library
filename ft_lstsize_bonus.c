/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:02:35 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/12 14:56:13 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	if (lst)
	{
		while (lst != NULL)
		{
			lst = lst->next;
			count++;
		}
	}
	return (count);
}
