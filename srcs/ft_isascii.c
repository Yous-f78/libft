/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:43 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:44 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if a character is an ascii.
/// @param c The character you want to check.
/// @return 1 if is an ascii, otherwise 0
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
