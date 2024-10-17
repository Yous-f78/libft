/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:17:23 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:17:25 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief The ft_open() functions use open(), but handle errors.
/// or returns the file descriptor.
/// @param path The path to the file you want to open.
/// @param methods The methods you want to use to open.
/// [r: read | w: write | a: append]
/// @return The file descriptor of the filepath.
int	ft_open(char *path, char methods)
{
	int	fd;

	if (methods == 'r')
		fd = open(path, O_RDONLY, 0777);
	else if (methods == 'w')
		fd = open(path, O_WRONLY | O_TRUNC | O_CREAT, 0777);
	else if (methods == 'a')
		fd = open(path, O_APPEND | O_WRONLY | O_CREAT, 0777);
	else
		ft_error("Your method to open the file not exist.", 2);
	if (fd == -1)
		ft_error("Failed to open the file.", 1);
	return (fd);
}
