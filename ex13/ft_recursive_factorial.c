/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:36:22 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/10 12:57:36 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb <= 16)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (!nb)
		return (1);
	return (0);
}
