/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:35 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:37 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief The strnstr() function locates the first occurrence of the
/// null-terminated string s2 in the string s1, where not more than
/// len characters are searched.
/// @param s1 The initial string.
/// @param s2 The string you want to search in.
/// @param n The n bytes you want to try.
/// @return If s2 is an empty string, s1 is returned; if s2 occurs
/// nowhere in s1, NULL is returned; otherwise a pointer to the first
/// character of the first occurrence of s2 is returned.
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] != '\0' && s1[i + j] == s2[j] && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
