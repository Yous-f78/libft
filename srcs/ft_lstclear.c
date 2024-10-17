/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:16:23 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:16:26 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Deletes and frees the given node and every
/// successor of that node, using the function ’del’ and free(3).
/// Finally, the pointer to the list must be set to NULL.
/// @param lst The address of a pointer to a node.
/// @param del The address of the function used to delete the content
/// of the node.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*to_del;

	if (!lst || !*lst)
		return ;
	temp = *lst;
	while (temp)
	{
		to_del = temp;
		temp = temp->next;
		ft_lstdelone(to_del, del);
	}
	*lst = NULL;
}
