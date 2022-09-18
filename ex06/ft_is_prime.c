/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:15:23 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/17 14:08:04 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = 0;
	while (a != 46341 && a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (a);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	a;

	sqrt = 0;
	a = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else
	{
		sqrt = ft_sqrt(nb);
		while (a <= sqrt)
		{
			if (nb % a == 0 && a != nb)
				return (0);
			a++;
		}
		return (1);
	}
}
