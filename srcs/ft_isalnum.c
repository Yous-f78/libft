/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:32 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:34 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/// @brief Check if a character is a letter or a number.
/// @param c The character you want to check.
/// @return 1 if is a letter or a number, otherwise 0
int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/* int main(void)
{
	printf(ft_isalnum('c') == 1 ? "OK" : "WRONG");
	printf("\n");
	printf(ft_isalnum('-') == 0 ? "OK" : "WRONG");
	printf("\n");
	printf(ft_isalnum('3') == 1 ? "OK" : "WRONG");
	printf("\n");
} */
