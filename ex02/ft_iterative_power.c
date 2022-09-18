/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:16:11 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/14 13:43:07 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	num;

	a = power;
	num = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (a > 0)
	{
		num *= nb;
		a--;
	}
	return (num);
}
