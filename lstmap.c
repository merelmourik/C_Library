/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmourik <mmourik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 15:40:39 by mmourik        #+#    #+#                */
/*   Updated: 2019/11/23 12:20:39 by mmourik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	if (lst)
	{
		new->content = f(lst->content);
		new->next = ft_lstmap(lst->next, f, del);
	}
	return (new);
}
