/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:13:59 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/14 13:25:17 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb);
}
