/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:54 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:58 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if a character is a printable.
/// @param c The character you want to check.
/// @return 1 if is a printable, otherwise 0
int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
