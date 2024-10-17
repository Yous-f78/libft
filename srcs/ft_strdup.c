/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:56 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:58 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief The ft_strdup() function allocates sufficient memory for a
/// copy of the string s, does the copy, and returns a pointer to it.
/// @param s The string you want to copie.
/// @return A pointer to the string.
char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	i = 0;
	str = (char *)malloc((ft_strlen(ptr) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (ptr[i])
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
