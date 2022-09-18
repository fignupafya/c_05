/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:34:31 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/17 14:11:31 by acigerim         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
	{
		nb += 2;
	}
	return (nb);
}
