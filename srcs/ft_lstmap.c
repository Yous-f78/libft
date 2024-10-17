/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:16:44 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:16:46 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Iterates the list ’lst’ and applies the function
/// ’f’ on the content of each node. Creates a new
/// list resulting of the successive applications of
/// the function ’f’. The ’del’ function is used to
/// delete the content of a node if needed.
/// @param lst The address of a pointer to a node.
/// @param f The address of the function used to iterate on the list.
/// @param del The address of the function used to delete the content
/// of a node if needed.
/// @return The new list. NULL if the allocation fails.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	ft_lstadd_back(&new_list, NULL);
	return (new_list);
}
