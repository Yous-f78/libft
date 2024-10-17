/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:29 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:30 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t nb)
{
	size_t	end_dest;
	size_t	i;

	i = 0;
	end_dest = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[end_dest + i] = src[i];
		i++;
	}
	dest[end_dest + i] = '\0';
	return (dest);
}
