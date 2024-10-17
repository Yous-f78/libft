/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:37 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:39 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if a character is a letter.
/// @param c The character you want to check.
/// @return 1 if is a letter, otherwise 0
int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
