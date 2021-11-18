/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 13:37:41 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/23 12:26:48 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	if (!lst)
		return ;
	while (lst)
	{
		temp = lst->next;
		f(lst->content);
		lst = temp;
	}
}
