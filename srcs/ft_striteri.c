/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymeskine <ymeskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:18:00 by ymeskine          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:02 by ymeskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Applies the function ’f’ on each character of
/// the string passed as argument, passing its index
/// as first argument. Each character is passed by
/// address to ’f’ to be modified if necessary.
/// @param s The string on which to iterate.
/// @param f The function to apply to each character.
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
