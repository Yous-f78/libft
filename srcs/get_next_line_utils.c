/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:57 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:59 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int	found_newlines(char *all_read)
{
	int	i;

	i = 0;
	if (!all_read)
		return (0);
	while (all_read[i])
	{
		if (all_read[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
