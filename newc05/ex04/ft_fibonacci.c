/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyakyuz <beyakyuz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:12:38 by beyakyuz          #+#    #+#             */
/*   Updated: 2026/07/15 15:55:57 by beyakyuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
