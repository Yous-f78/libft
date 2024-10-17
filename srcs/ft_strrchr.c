/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:39 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:40 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief The ft_strrchr() function is identical to ft_strchr(),
/// except it locates the last occurrence of c.
/// @param s The string you want to check.
/// @param c The character you want to locate.
/// @return The ft_strrchr() function returns a pointer to the byte located,
/// or NULL if no such byte exists within n bytes.
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occ;

	i = 0;
	last_occ = NULL;
	while (s[i])
	{
		if (s[i] == (const char)c)
			last_occ = (char *)&s[i];
		i++;
	}
	if ((const char)c == '\0')
		last_occ = (char *)&s[i];
	return (last_occ);
}
