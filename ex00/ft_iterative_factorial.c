/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:01:11 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/17 13:52:33 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	num;

	a = 1;
	num = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		num *= a;
		a++;
	}
	return (num);
}
