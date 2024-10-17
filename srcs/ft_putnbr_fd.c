/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:36 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:37 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief The function writes a number in a file descriptor.
/// @param n The number you want to write.
/// @param fd The file descriptor.
void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	nb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + 48;
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(0);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(10);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(3000);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2147483647);
// 	write(1, "\n", 1);
// }
