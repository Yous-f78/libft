/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:50 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:51 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/// @brief The ft_tolower() function converts an upper-case letter
/// to the corresponding lower-case letter.
/// @param c The character you want to convert.
/// @return If the argument is an upper-case letter, the tolower()
/// function returns the corresponding lower-case letter if there
/// is one; otherwise, the argument is returned unchanged.
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("%c", tolower('C'));
// 	printf("%c", tolower('e'));
// 	printf("%c", tolower('Z'));
// 	printf("%c", tolower('A'));
// 	printf("%c", tolower('-'));
// 	printf("%c", tolower('4'));
// }
