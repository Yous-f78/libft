/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:46 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:47 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a substring from the
/// string ’s’. The substring begins at index ’start’ and is of maximum
/// size ’len’.
/// @param s The string from which to create the substring.
/// @param start The start index of the substring in the string ’s’.
/// @param len The maximum length of the substring.
/// @return The substring. NULL if the allocation fails.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	max_len;
	char	*sub;

	i = -1;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	max_len = ft_strlen(s) - start;
	if (max_len > len)
		max_len = len;
	sub = malloc((max_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i++, i < max_len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
