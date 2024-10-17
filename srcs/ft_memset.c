/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:19 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:20 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief The memset() function writes n bytes of value c
/// (converted to an unsigned char) to the string c.
/// @param s The string you want to fill.
/// @param c The character you want to set.
/// @param n The n bytes you want to set.
/// @return The memset() function returns its first argument.
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cpy;
	size_t			i;

	i = 0;
	cpy = s;
	while (i < n)
	{
		cpy[i] = c;
		i++;
	}
	return (s);
}
