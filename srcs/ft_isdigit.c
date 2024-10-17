/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:48 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:50 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if a character is a digit.
/// @param c The character you want to check.
/// @return 1 if is a digit, otherwise 0
int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
