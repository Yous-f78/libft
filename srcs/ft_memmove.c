/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:15 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:17 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief The memmove() function copies len bytes from string src to
/// string dst.
/// The two strings may overlap; the copy is always done in a non-destructive
/// manner.
/// @param dest The dest of the copie.
/// @param src The source of the copie.
/// @param n The n bytes you want to copie.
/// @return The memmove() function returns the original value of dst.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = dest;
	s = src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
