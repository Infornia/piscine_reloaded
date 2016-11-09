/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:14:07 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/09 16:29:37 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ret;
	int	i;
	
	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	i = min - 1;
	while (++i < max)
		ret[i - min] = i;
	return (ret);
}