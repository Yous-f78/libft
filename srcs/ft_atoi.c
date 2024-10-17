/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:06 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:08 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/// @brief The ft_atoi() function converts the initial portion of the string
/// pointed to by str to int representation.
/// @param str The string you want to convert to int.
/// @return The string convert to int.
int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	is_neg;

	nb = 0;
	i = 0;
	is_neg = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * is_neg);
}

// int	main(void)
// {
// 	printf("%d:%d\n", ft_atoi("\n   -2147483649"), atoi("\n   -2147483649"));
// 	printf("%d:%d\n", ft_atoi("  \t  -2147483648"), atoi("  \t  -2147483648"));
// 	printf("%d:%d\n", ft_atoi(" 2147483647"), atoi(" 2147483647"));
// 	printf("%d:%d\n", ft_atoi("ab4534572323"), atoi("ab4534572323"));
// 	printf("%d:%d\n", ft_atoi("-45 323"), atoi("-45 323"));
// 	printf("%d:%d\n", ft_atoi("- 45 323"), atoi("- 45 323"));
// 	printf("%d:%d\n", ft_atoi("   1406 323"), atoi("   1406 323"));
// }
