/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:58:45 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/10 12:51:38 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *t, int l, void (*f)(int))
{
	int	i;

	i = -1;
	if (t && f && l > 0)
	{
		while (++i < l)
			f(t[i]);
	}
}