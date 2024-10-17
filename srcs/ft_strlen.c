/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:20 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:22 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/// @brief The length of the string.
/// @param s The string you want to get length.
/// @return The length of the string.
size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
// int main(void)
// {
// 	printf(ft_strlen("Salut !!") == strlen("Salut !!") ? "OK" : "WRONG");
// 	printf("\n");
// 	printf(ft_strlen("") == strlen("") ? "OK" : "WRONG");
// 	printf("\n");
// 	printf(ft_strlen(" ") == strlen(" ") ? "OK" : "WRONG");
// 	printf("\n");
// }
