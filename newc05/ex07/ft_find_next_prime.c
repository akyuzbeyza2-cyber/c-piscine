/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyakyuz <beyakyuz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:35:06 by beyakyuz          #+#    #+#             */
/*   Updated: 2026/07/15 15:55:41 by beyakyuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while ((c < nb) && (c != nb))
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
