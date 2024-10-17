/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:28 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:29 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief The function writes a character in a file descriptor.
/// @param c The character you want to write.
/// @param fd The file descriptor.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
