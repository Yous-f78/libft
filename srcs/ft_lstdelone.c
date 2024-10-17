/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:16:29 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:16:31 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Takes as a parameter a node and frees the memory of
/// the node’s content using the function ’del’ given
/// as a parameter and free the node. The memory of
/// ’next’ must not be freed.
/// @param lst The node to free.
/// @param del The address of the function used to delete the content.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
