/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyakyuz <beyakyuz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:56:06 by beyakyuz          #+#    #+#             */
/*   Updated: 2026/07/15 15:59:38 by beyakyuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((power == 0 && nb == 0) || power == 0)
		return (result);
	if (power < 0 || nb == 0)
		return (0);
	return (nb * ft_recursive_power (nb, power -1));
}
